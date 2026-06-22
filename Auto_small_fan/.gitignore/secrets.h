#ifndef SECRETS_H
#define SECRETS_H

// ===== WiFi =====
#define WIFI_SSID   "自身のWiFiのSSID"
#define WIFI_PASS   "自身のWiFiのパスワード"

// ===== SwitchBot（ライトを挿したプラグ）=====
#define SB_TOKEN    "自身で取得したswitchbotのトークン"
#define SB_SECRET   "自身で取得したswitchbotのシークレット"
#define SB_DEVICE_STR "自身で取得したデバイスID"

// ===== Discord Webhook =====
// "/api/webhooks/～" 以降だけを設定してください
#define DISCORD_PATH_STR "/api/webhooks/自身が作成したdiscordサーバーのURL"

#endif // SECRETS_H
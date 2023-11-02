
@interface WiFiAnalyticsAWDWiFiUSBEventNotification : PBCodable <NSCopying> {
    unsigned long long  _durationSinceUSBEventInSeconds;
    struct { 
        unsigned int durationSinceUSBEventInSeconds : 1; 
        unsigned int usbAction : 1; 
        unsigned int usbTotal : 1; 
        unsigned int isVendorApple : 1; 
        unsigned int smartCCADesenseSupported : 1; 
    }  _has;
    bool  _isVendorApple;
    bool  _smartCCADesenseSupported;
    unsigned int  _usbAction;
    unsigned int  _usbTotal;
}

@property (nonatomic) unsigned long long durationSinceUSBEventInSeconds;
@property (nonatomic) bool hasDurationSinceUSBEventInSeconds;
@property (nonatomic) bool hasIsVendorApple;
@property (nonatomic) bool hasSmartCCADesenseSupported;
@property (nonatomic) bool hasUsbAction;
@property (nonatomic) bool hasUsbTotal;
@property (nonatomic) bool isVendorApple;
@property (nonatomic) bool smartCCADesenseSupported;
@property (nonatomic) unsigned int usbAction;
@property (nonatomic) unsigned int usbTotal;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationSinceUSBEventInSeconds;
- (bool)hasDurationSinceUSBEventInSeconds;
- (bool)hasIsVendorApple;
- (bool)hasSmartCCADesenseSupported;
- (bool)hasUsbAction;
- (bool)hasUsbTotal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isVendorApple;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationSinceUSBEventInSeconds:(unsigned long long)arg1;
- (void)setHasDurationSinceUSBEventInSeconds:(bool)arg1;
- (void)setHasIsVendorApple:(bool)arg1;
- (void)setHasSmartCCADesenseSupported:(bool)arg1;
- (void)setHasUsbAction:(bool)arg1;
- (void)setHasUsbTotal:(bool)arg1;
- (void)setIsVendorApple:(bool)arg1;
- (void)setSmartCCADesenseSupported:(bool)arg1;
- (void)setUsbAction:(unsigned int)arg1;
- (void)setUsbTotal:(unsigned int)arg1;
- (bool)smartCCADesenseSupported;
- (unsigned int)usbAction;
- (unsigned int)usbTotal;
- (void)writeTo:(id)arg1;

@end

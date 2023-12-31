
@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {
    struct { 
        unsigned int localNotificationNumberReceived : 1; 
    }  _has;
    int  _localNotificationNumberReceived;
}

@property (nonatomic) bool hasLocalNotificationNumberReceived;
@property (nonatomic) int localNotificationNumberReceived;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalNotificationNumberReceived;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localNotificationNumberReceived;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocalNotificationNumberReceived:(bool)arg1;
- (void)setLocalNotificationNumberReceived:(int)arg1;
- (void)writeTo:(id)arg1;

@end

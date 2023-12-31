
@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int notifyOnEntry : 1; 
        unsigned int notifyOnExit : 1; 
    }  _has;
    bool  _notifyOnEntry;
    bool  _notifyOnExit;
}

@property (nonatomic) bool hasNotifyOnEntry;
@property (nonatomic) bool hasNotifyOnExit;
@property (nonatomic) bool notifyOnEntry;
@property (nonatomic) bool notifyOnExit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNotifyOnEntry;
- (bool)hasNotifyOnExit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)notifyOnEntry;
- (bool)notifyOnExit;
- (bool)readFrom:(id)arg1;
- (void)setHasNotifyOnEntry:(bool)arg1;
- (void)setHasNotifyOnExit:(bool)arg1;
- (void)setNotifyOnEntry:(bool)arg1;
- (void)setNotifyOnExit:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

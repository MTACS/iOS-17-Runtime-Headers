
@interface AWDSafariAutoFillAuthenticationPreferenceEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int requiresAuthentication : 1; 
    }  _has;
    bool  _requiresAuthentication;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRequiresAuthentication;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequiresAuthentication;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiresAuthentication;
- (void)setHasRequiresAuthentication:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
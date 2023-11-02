
@interface SharedChannelCreateRequest : PBRequest <NSCopying> {
    NSString * _adopter;
    AuthCredential * _authCredential;
    int  _channelOwnershipType;
    NSString * _channelTopic;
    struct { 
        unsigned int channelOwnershipType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *adopter;
@property (nonatomic, retain) AuthCredential *authCredential;
@property (nonatomic) int channelOwnershipType;
@property (nonatomic, retain) NSString *channelTopic;
@property (nonatomic, readonly) bool hasAdopter;
@property (nonatomic, readonly) bool hasAuthCredential;
@property (nonatomic) bool hasChannelOwnershipType;
@property (nonatomic, readonly) bool hasChannelTopic;

- (void).cxx_destruct;
- (int)StringAsChannelOwnershipType:(id)arg1;
- (id)adopter;
- (id)authCredential;
- (int)channelOwnershipType;
- (id)channelOwnershipTypeAsString:(int)arg1;
- (id)channelTopic;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdopter;
- (bool)hasAuthCredential;
- (bool)hasChannelOwnershipType;
- (bool)hasChannelTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdopter:(id)arg1;
- (void)setAuthCredential:(id)arg1;
- (void)setChannelOwnershipType:(int)arg1;
- (void)setChannelTopic:(id)arg1;
- (void)setHasChannelOwnershipType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

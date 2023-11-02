
@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {
    long long  _cloudID;
    NSString * _cloudUniversalLibraryID;
    NSString * _contentItemID;
    long long  _delegateInfoID;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int purchaseHistoryID : 1; 
        unsigned int storeAdamID : 1; 
        unsigned int storeSubscriptionAdamID : 1; 
    }  _has;
    NSString * _playbackAuthorizationToken;
    long long  _purchaseHistoryID;
    long long  _storeAdamID;
    long long  _storeSubscriptionAdamID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

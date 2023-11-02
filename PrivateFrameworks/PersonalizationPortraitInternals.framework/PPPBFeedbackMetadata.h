
@interface PPPBFeedbackMetadata : PBCodable <NSCopying> {
    NSString * _clientBundleId;
    NSString * _clientIdentifier;
    struct { 
        unsigned int unixTimestampSec : 1; 
        unsigned int isMapped : 1; 
    }  _has;
    bool  _isMapped;
    NSString * _mappingId;
    unsigned long long  _unixTimestampSec;
}

@property (nonatomic, retain) NSString *clientBundleId;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) bool hasClientBundleId;
@property (nonatomic, readonly) bool hasClientIdentifier;
@property (nonatomic) bool hasIsMapped;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic) bool hasUnixTimestampSec;
@property (nonatomic) bool isMapped;
@property (nonatomic, retain) NSString *mappingId;
@property (nonatomic) unsigned long long unixTimestampSec;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)clientIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientBundleId;
- (bool)hasClientIdentifier;
- (bool)hasIsMapped;
- (bool)hasMappingId;
- (bool)hasUnixTimestampSec;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMapped;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientBundleId:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setHasIsMapped:(bool)arg1;
- (void)setHasUnixTimestampSec:(bool)arg1;
- (void)setIsMapped:(bool)arg1;
- (void)setMappingId:(id)arg1;
- (void)setUnixTimestampSec:(unsigned long long)arg1;
- (unsigned long long)unixTimestampSec;
- (void)writeTo:(id)arg1;

@end

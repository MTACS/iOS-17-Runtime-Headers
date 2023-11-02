
@interface CKDShortTokenLookupInfo : NSObject <CKRoughlyEquivalent, NSCopying> {
    bool  _forceDSRefetch;
    NSString * _participantID;
    NSString * _routingKey;
    NSData * _shortSharingTokenHashData;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (nonatomic) bool forceDSRefetch;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortSharingTokenHashData;
@property (nonatomic) bool shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)equivalencyProperties;
- (bool)forceDSRefetch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)participantID;
- (id)routingKey;
- (void)setForceDSRefetch:(bool)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shortSharingTokenHashData;
- (bool)shouldFetchRootRecord;

@end

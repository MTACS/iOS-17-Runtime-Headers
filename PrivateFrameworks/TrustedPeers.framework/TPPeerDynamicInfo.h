
@interface TPPeerDynamicInfo : NSObject {
    unsigned long long  _clock;
    NSSet * _excludedPeerIDs;
    NSSet * _includedPeerIDs;
    NSSet * _preapprovals;
    TPTypedSignedData * _tsd;
}

@property (nonatomic, readonly) unsigned long long clock;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dispositions;
@property (nonatomic, readonly) NSSet *excludedPeerIDs;
@property (nonatomic, readonly) NSSet *includedPeerIDs;
@property (nonatomic, readonly) NSSet *preapprovals;
@property (nonatomic, readonly) NSData *sig;
@property (nonatomic, retain) TPTypedSignedData *tsd;

+ (id)dynamicInfoPBWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5;
+ (id)dynamicInfoWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id*)arg7;
+ (id)dynamicInfoWithData:(id)arg1 sig:(id)arg2;

- (void).cxx_destruct;
- (bool)checkSignatureWithKey:(id)arg1;
- (unsigned long long)clock;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dispositions;
- (id)excludedPeerIDs;
- (id)includedPeerIDs;
- (id)initWithObj:(id)arg1 tsd:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerDynamicInfo:(id)arg1;
- (id)pb;
- (id)preapprovals;
- (void)setTsd:(id)arg1;
- (id)sig;
- (id)tsd;

@end

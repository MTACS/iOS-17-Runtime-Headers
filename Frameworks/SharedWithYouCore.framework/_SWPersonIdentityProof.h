
@interface _SWPersonIdentityProof : SWPersonIdentityProof <_SWPersonIdentityProofProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inclusionHashes;
@property (nonatomic) unsigned long long localKeyIndex;
@property (nonatomic, copy) NSData *publicKey;
@property (readonly) Class superclass;

- (id)initWithInclusionHashes:(id)arg1;

@end

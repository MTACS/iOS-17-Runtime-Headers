
@protocol PNPersonProtocol <NSObject>

@required

- (NSString *)anonymizedName;
- (short)detectionType;
- (unsigned long long)faceCount;
- (bool)favorite;
- (bool)hidden;
- (bool)isVerified;
- (<PNFaceProtocol> *)keyFace;
- (NSString *)localIdentifier;
- (long long)manualOrder;
- (NSArray *)personLocalIdentifiers;
- (void)pn_addMergeCandidatePersons:(id <PNFetchResultProtocol>)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id <PNFaceProtocol>)arg1;
- (void)setManualOrder:(long long)arg1;
- (long long)verifiedType;

@end

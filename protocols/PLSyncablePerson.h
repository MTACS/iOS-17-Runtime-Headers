
@protocol PLSyncablePerson <NSObject, PLSyncableObject>

@required

- (short)detectionType;
- (NSString *)fullName;
- (bool)graphVerified;
- (bool)isTombstone;
- (bool)keyFaceIsPicked;
- (NSString *)personUUID;
- (NSString *)pl_shortDescription;
- (NSString *)pointerDescription;
- (void)setDetectionType:(short)arg1;
- (void)setFullName:(NSString *)arg1;
- (void)setKeyFaceToPicked;
- (void)setPersonUUID:(NSString *)arg1;
- (NSString *)syncDescription;
- (bool)userVerified;

@end

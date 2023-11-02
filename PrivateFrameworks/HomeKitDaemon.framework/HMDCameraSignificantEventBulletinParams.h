
@interface HMDCameraSignificantEventBulletinParams : HMFObject {
    NSUUID * _UUID;
    NSUUID * _cameraProfileUUID;
    unsigned long long  _confidenceLevel;
    NSDate * _dateOfOccurrence;
    NSSet * _faceClassifications;
    unsigned long long  _reason;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSSet *faceClassifications;
@property (readonly) unsigned long long reason;

- (void).cxx_destruct;
- (id)UUID;
- (id)cameraProfileUUID;
- (unsigned long long)confidenceLevel;
- (id)dateOfOccurrence;
- (id)faceClassifications;
- (id)init;
- (id)initWithSignificantEvent:(id)arg1 cameraProfileUUID:(id)arg2;
- (id)initWithUUID:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassifications:(id)arg5 cameraProfileUUID:(id)arg6;
- (unsigned long long)reason;

@end

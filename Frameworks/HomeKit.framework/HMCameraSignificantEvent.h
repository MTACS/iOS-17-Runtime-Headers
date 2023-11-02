
@interface HMCameraSignificantEvent : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _cameraProfileUUID;
    unsigned long long  _confidenceLevel;
    NSDate * _dateOfOccurrence;
    HMFaceClassification * _faceClassification;
    unsigned long long  _reason;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) bool canAskForUserFeedback;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFaceClassification *faceClassification;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cameraProfileUUID;
- (bool)canAskForUserFeedback;
- (unsigned long long)confidenceLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfOccurrence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceClassification;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (unsigned long long)reason;
- (id)shortDescription;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_faceClassificationName;
- (id)hf_reasonKey;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end

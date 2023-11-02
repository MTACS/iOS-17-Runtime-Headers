
@interface HMCameraRecordingReachabilityEvent : NSObject <HFCameraRecordingEvent, HFStateDumpBuildable, HMCameraRecordingEvent, NSSecureCoding> {
    NSDate * _dateOfOccurrence;
    bool  _reachable;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateOfOccurrence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 dateOfOccurrence:(id)arg2 reachable:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReachable;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)canAskForUserFeedback;
- (unsigned long long)containerType;
- (double)duration;
- (id)encryptionKey;
- (id)hf_dateInterval;
- (double)hf_duration;
- (id)hf_endDate;
- (bool)hf_hasInsufficientAnalysis;
- (bool)hf_isPlayable;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (bool)isComplete;
- (double)targetFragmentDuration;
- (id)videoAssetRequiredHTTPHeaders;

@end

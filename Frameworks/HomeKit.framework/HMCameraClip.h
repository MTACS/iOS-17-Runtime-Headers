
@interface HMCameraClip : NSObject <HFCameraClip, HFStateDumpBuildable, HMCameraRecordingEvent, HMFObject, NSCopying, NSSecureCoding> {
    bool  _complete;
    bool  _donated;
    double  _duration;
    HMCameraClipEncryptionContext * _encryptionContext;
    long long  _quality;
    NSSet * _significantEvents;
    NSDate * _startDate;
    NSString * _streamingAssetVersion;
    double  _targetFragmentDuration;
    NSUUID * _uniqueIdentifier;
    NSArray * _videoSegments;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) bool canAskForUserFeedback;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDonated, readonly) bool donated;
@property (readonly) double duration;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hf_size;
@property (nonatomic, readonly, copy) NSArray *hf_sortedSignificantEvents;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) long long quality;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSString *streamingAssetVersion;
@property (readonly) Class superclass;
@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSArray *videoSegments;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)canAskForUserFeedback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfOccurrence;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionContext;
- (id)encryptionKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(bool)arg5 isDonated:(bool)arg6 quality:(long long)arg7 streamingAssetVersion:(id)arg8 encryptionContext:(id)arg9 videoSegments:(id)arg10 significantEvents:(id)arg11;
- (bool)isComplete;
- (bool)isDonated;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (long long)quality;
- (id)shortDescription;
- (id)significantEvents;
- (id)startDate;
- (id)streamingAssetVersion;
- (double)targetFragmentDuration;
- (id)uniqueIdentifier;
- (id)videoAssetRequiredHTTPHeaders;
- (id)videoDataSegments;
- (id)videoSegments;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)containerType;
- (void)dealloc;
- (id)hf_allEventsContainingPeopleInClip;
- (id)hf_dateInterval;
- (double)hf_duration;
- (id)hf_endDate;
- (id)hf_faceCropNameAtOffset:(double)arg1;
- (id)hf_faceCropNamesAtOffset:(double)arg1;
- (id)hf_familiarFaceEventAtOffset:(double)arg1;
- (bool)hf_hasInsufficientAnalysis;
- (bool)hf_isPlayable;
- (unsigned long long)hf_size;
- (void)hf_sortSignificantEvents;
- (id)hf_sortedSignificantEvents;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_accessibilityStringForSignificantEvent:(id)arg1 inReferenceDate:(id)arg2;
- (id)hu_accessibilityStringForSignificantEvents;

@end

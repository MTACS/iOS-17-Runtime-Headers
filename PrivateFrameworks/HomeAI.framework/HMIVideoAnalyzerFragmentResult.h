
@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding> {
    HMIVideoAnalyzerDynamicConfiguration * _configuration;
    NSSet * _events;
    HMIVideoFragment * _fragment;
    NSArray * _frameResults;
    HMIVideoAnalyzerResultOutcome * _outcome;
    NSArray * _thumbnails;
}

@property (readonly) HMIVideoAnalyzerDynamicConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events;
@property (readonly) HMIVideoFragment *fragment;
@property (readonly) NSArray *frameResults;
@property (readonly) unsigned long long hash;
@property (readonly) HMIVideoAnalyzerResultOutcome *outcome;
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnails;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)fragment;
- (id)frameResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithFragment:(id)arg1 events:(id)arg2 frameResults:(id)arg3 thumbnails:(id)arg4 configuration:(id)arg5 outcome:(id)arg6;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (id)maxConfidenceEvents;
- (id)outcome;
- (id)redactedCopyWithFrameResults:(bool)arg1 fragment:(bool)arg2;
- (id)thumbnails;

@end

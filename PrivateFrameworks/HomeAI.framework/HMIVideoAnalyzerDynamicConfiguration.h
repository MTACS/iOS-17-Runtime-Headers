
@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding> {
    NSArray * _activityZones;
    long long  _eventTriggers;
    bool  _recognizeFaces;
}

@property (retain) NSArray *activityZones;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long eventTriggers;
@property (readonly) unsigned long long hash;
@property bool recognizeFaces;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityZones;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventTriggers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)recognizeFaces;
- (void)setActivityZones:(id)arg1;
- (void)setEventTriggers:(long long)arg1;
- (void)setRecognizeFaces:(bool)arg1;

@end

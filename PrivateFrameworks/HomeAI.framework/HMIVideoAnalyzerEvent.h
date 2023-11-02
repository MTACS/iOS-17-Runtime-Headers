
@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    HMIConfidence * _confidence;
    NSDictionary * _userInfo;
}

@property (readonly) NSArray *allEvents;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) HMIConfidence *confidence;
@property (readonly) long long confidenceLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *userInfo;

+ (id)defaultConfidenceThreshold:(Class)arg1 confidenceLevel:(long long)arg2;
+ (id)defaultConfidenceThresholdsFeedback;
+ (id)defaultConfidenceThresholdsHigh;
+ (id)defaultConfidenceThresholdsMedium;
+ (Class)eventClassForShortName:(id)arg1;
+ (id)eventClasses;
+ (id)eventClassesArray;
+ (id)eventConfidenceThresholdsHigh;
+ (id)eventConfidenceThresholdsMedium;
+ (id)eventsWithContentsOfFile:(id)arg1;
+ (id)logCategory;
+ (id)rgbColorCodeForEventClass:(Class)arg1;
+ (id)shortNameForEventClass:(Class)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allEvents;
- (id)attributeDescriptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)confidence;
- (long long)confidenceLevel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)userInfo;

@end

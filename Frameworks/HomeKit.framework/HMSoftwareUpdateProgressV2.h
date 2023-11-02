
@interface HMSoftwareUpdateProgressV2 : NSObject <HFStateDumpBuildable, HMFObject> {
    double  _estimatedTimeRemaining;
    float  _percentageComplete;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double estimatedTimeRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) float percentageComplete;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)estimatedTimeRemaining;
- (unsigned long long)hash;
- (id)initWithPercentageComplete:(float)arg1 estimatedTimeRemaining:(double)arg2;
- (bool)isEqual:(id)arg1;
- (float)percentageComplete;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end

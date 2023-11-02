
@interface HPSProductUtils : NSObject

+ (id)getProductSpecificString:(unsigned int)arg1 descriptionKey:(id)arg2;
+ (bool)isAppleHeadphone:(id)arg1;
+ (bool)isBeatsNonWx:(id)arg1;
+ (bool)isFeatureSupported:(int)arg1 byDevice:(id)arg2;
+ (bool)isFeatureSupported:(int)arg1 byProductId:(unsigned int)arg2;
+ (bool)isRealityDevice;

@end

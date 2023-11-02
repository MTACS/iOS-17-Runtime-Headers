
@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _defaultValues;
}

@property (nonatomic, retain) NSMutableDictionary *defaultValues;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)defaultValueForKey:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;
+ (id)defaultValues;
+ (void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValues;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDefaultValues:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

+ (void)registerBagKeySetForMetricsConfiguration:(id)arg1;
+ (void)registerBagKeySetForMetricsRecorder:(id)arg1;

@end

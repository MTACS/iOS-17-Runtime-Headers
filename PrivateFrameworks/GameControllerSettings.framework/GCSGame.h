
@interface GCSGame : NSObject <GCSJSONSerializable, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSDictionary * _controllerToCompatibilityModeMappings;
    NSDictionary * _controllerToProfileMappings;
    NSDate * _modifiedDate;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *controllerToCompatibilityModeMappings;
@property (nonatomic, readonly, copy) NSDictionary *controllerToProfileMappings;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)archivalClasses;
+ (id)defaultGame;
+ (id)defaultIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)controllerToCompatibilityModeMappings;
- (id)controllerToProfileMappings;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 controllerToProfileMappings:(id)arg3 controllerToCompatibilityModeMappings:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;
- (id)modifiedDate;
- (id)profileForController:(id)arg1 profiles:(id)arg2;
- (id)profileUUIDForPersistentControllerIdentifier:(id)arg1;
- (id)title;

@end

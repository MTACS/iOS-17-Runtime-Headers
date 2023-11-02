
@interface STUsageBundleOverrides : NSObject {
    bool  _ignore;
    NSString * _replaceWithZeroSizeApp;
}

@property (readonly) bool ignore;
@property (readonly) NSString *replaceWithZeroSizeApp;

+ (id)overrides;
+ (id)overridesFor:(id)arg1;

- (void).cxx_destruct;
- (bool)ignore;
- (id)initWithDictionary:(id)arg1;
- (id)replaceWithZeroSizeApp;

@end

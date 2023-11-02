
@interface VUIJSObject : NSObject {
    VUIAppContext * _appContext;
    NSMutableDictionary * _managedProperties;
}

@property (nonatomic, readonly) VUIAppContext *appContext;
@property (nonatomic, retain) NSMutableDictionary *managedProperties;

- (void).cxx_destruct;
- (id)appContext;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)jsValueForProperty:(id)arg1;
- (id)managedProperties;
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;
- (void)setManagedProperties:(id)arg1;

@end

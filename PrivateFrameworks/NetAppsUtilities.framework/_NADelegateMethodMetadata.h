
@interface _NADelegateMethodMetadata : NSObject {
    id /* block */  _customHandler;
    NSDictionary * _customLogSettingsByArgumentIndex;
    NSMethodSignature * _methodSignature;
}

@property (nonatomic, copy) id /* block */ customHandler;
@property (nonatomic, copy) NSDictionary *customLogSettingsByArgumentIndex;
@property (nonatomic, retain) NSMethodSignature *methodSignature;

- (void).cxx_destruct;
- (id /* block */)customHandler;
- (id)customLogSettingsByArgumentIndex;
- (id)methodSignature;
- (void)setCustomHandler:(id /* block */)arg1;
- (void)setCustomLogSettingsByArgumentIndex:(id)arg1;
- (void)setMethodSignature:(id)arg1;

@end

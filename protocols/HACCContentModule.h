
@protocol HACCContentModule <NSObject>

@required

- (NSNumber *)contentValue;
- (<HACCContentModuleDelegate> *)delegate;
- (bool)enabled;
- (unsigned long long)module;
- (void)setDelegate:(id <HACCContentModuleDelegate>)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)updateValue;

@optional

- (bool)providesOwnSeparator;
- (void)setProvidesOwnSeparator:(bool)arg1;

@end

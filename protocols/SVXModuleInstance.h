
@protocol SVXModuleInstance <NSObject>

@required

- (id)initWithModule:(SVXModule *)arg1;
- (void)startWithModuleInstanceProvider:(id <SVXModuleInstanceProviding>)arg1 platformDependencies:(NSArray *)arg2;
- (void)stopWithModuleInstanceProvider:(id <SVXModuleInstanceProviding>)arg1;

@end

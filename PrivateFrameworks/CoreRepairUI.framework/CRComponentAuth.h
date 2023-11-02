
@interface CRComponentAuth : NSObject {
    NSString * componentName;
}

@property (nonatomic, copy) NSString *componentName;

- (void).cxx_destruct;
- (bool)_checkForComponentFailureInDefaults:(id)arg1;
- (id)componentName;
- (long long)convertIORegDataToStatus:(id)arg1 authPass:(id)arg2;
- (long long)copyComponentStatus;
- (id)init;
- (id)initWithComponentName:(id)arg1;
- (bool)isFirstAuthComplete;
- (void)setComponentName:(id)arg1;
- (long long)synchronouslycopyAuthStatus;

@end

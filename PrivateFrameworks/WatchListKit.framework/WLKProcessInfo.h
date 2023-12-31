
@interface WLKProcessInfo : NSObject {
    struct __SecTask { } * _currentTask;
}

@property (nonatomic) struct __SecTask { }*currentTask;

+ (id)currentProcessInfo;

- (bool)boolValueForEntitlement:(id)arg1;
- (struct __SecTask { }*)currentTask;
- (void)dealloc;
- (id)init;
- (void)setCurrentTask:(struct __SecTask { }*)arg1;
- (id)valueForEntitlement:(id)arg1;
- (bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end

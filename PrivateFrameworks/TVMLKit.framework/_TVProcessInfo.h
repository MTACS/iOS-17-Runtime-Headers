
@interface _TVProcessInfo : NSObject {
    struct __SecTask { } * _currentTask;
    bool  _hasPrivateEntitlement;
    bool  _hasiTunesAPIEntitlement;
    bool  _hasiTunesStoreEntitlement;
}

@property (nonatomic) struct __SecTask { }*currentTask;
@property (nonatomic, readonly) bool hasPrivateEntitlement;
@property (nonatomic, readonly) bool hasiTunesAPIEntitlement;
@property (nonatomic, readonly) bool hasiTunesStoreEntitlement;

+ (id)currentProcessInfo;

- (bool)boolValueForEntitlement:(id)arg1;
- (struct __SecTask { }*)currentTask;
- (void)dealloc;
- (bool)hasPrivateEntitlement;
- (bool)hasiTunesAPIEntitlement;
- (bool)hasiTunesStoreEntitlement;
- (id)init;
- (void)setCurrentTask:(struct __SecTask { }*)arg1;
- (id)valueForEntitlement:(id)arg1;
- (bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end

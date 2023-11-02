
@interface OZFxPlugGamutNotificationReceiver : NSObject {
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pluginLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleProjectColorChangeNotification:(id)arg1;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end

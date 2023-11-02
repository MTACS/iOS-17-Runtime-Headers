
@interface _NSKVODeallocSentinel : NSObject {
    id  _observedObject;
}

+ (void)_havingRegistrationLockHeldAttachSentinelToObjectIfNeeded:(id)arg1;

- (id)_initWithObservedObject:(id)arg1;
- (void)dealloc;

@end

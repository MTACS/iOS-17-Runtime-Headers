
@interface ChronoCore.ConcreteManagedConfigurationPrimitives : NSObject <MCProfileConnectionObserver> {
    void delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end

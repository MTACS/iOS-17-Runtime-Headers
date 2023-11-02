
@interface HMMRTCSessionManager : HMFObject {
    NSDictionary * _commonFields;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMRTCSessionFactory> * _sessionFactory;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addCommonField:(id)arg1 withValue:(id)arg2;
- (void)removeCommonField:(id)arg1;
- (id)sessionWithUUID:(id)arg1 serviceName:(id)arg2 uploadImmediately:(bool)arg3;
- (void)setSessionFactory:(id)arg1;
- (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 payload:(id)arg3;
- (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 uploadImmediately:(bool)arg3 payload:(id)arg4;

@end

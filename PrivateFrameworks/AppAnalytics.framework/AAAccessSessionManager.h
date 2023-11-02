
@interface AAAccessSessionManager : NSObject {
    void accessSessionManager;
}

@property (nonatomic, readonly) bool isActive;

- (void).cxx_destruct;
- (id)init;
- (bool)isActive;
- (void)pushSessionData:(id)arg1;
- (void)pushSessionData:(id)arg1 submitEventQueues:(bool)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2;
- (void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(bool)arg3;

@end

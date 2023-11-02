
@interface ANAnnouncementStatePublisher : NSObject {
    char * _name;
    NSObject<OS_dispatch_queue> * _queue;
    int  _registrationToken;
}

- (void).cxx_destruct;
- (void)_publishState:(unsigned long long)arg1 name:(id)arg2;
- (void)_register;
- (bool)_setName:(id)arg1;
- (bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;
- (void)_unregister;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)publishState:(unsigned long long)arg1 name:(id)arg2;

@end

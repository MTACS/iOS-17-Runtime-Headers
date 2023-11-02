
@interface REAudioManagerNotificationListener : NSObject {
    void * _owner;
}

- (void)engineInterrupted:(id)arg1;
- (id)initWithOwner:(void*)arg1;
- (void)servicesReset:(id)arg1;
- (void)sessionInterrupted:(id)arg1;
- (void)stop;

@end

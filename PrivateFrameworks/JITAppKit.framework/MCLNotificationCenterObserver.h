
@interface MCLNotificationCenterObserver : NSObject {
    bool  _enabled;
    NSString * _notification;
    id  _object;
}

@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *notification;
@property (nonatomic, retain) id object;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)notification;
- (id)object;
- (void)observeNotification:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNotification:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setup;

@end

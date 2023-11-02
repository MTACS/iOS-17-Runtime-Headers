
@interface SeymourServices.PowerMonitor : NSObject {
    void eventHub;
    void lock;
    void notificationPort;
    void powerNotificationReference;
    void powerService;
    void state;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

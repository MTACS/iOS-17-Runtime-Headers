
@interface REMListCalDAVNotificationContext : NSObject {
    REMList * _list;
}

@property (nonatomic, readonly) NSArray *calDAVNotifications;
@property (nonatomic, retain) REMList *list;

- (void).cxx_destruct;
- (id)calDAVNotifications;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;

@end

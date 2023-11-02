
@interface ESUserNotificationInfo : NSObject {
    NSString * _groupIdentifier;
    id /* block */  _handler;
}

@property (nonatomic, copy) NSString *groupIdentifier;

- (void).cxx_destruct;
- (id)groupIdentifier;
- (id /* block */)handler;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end

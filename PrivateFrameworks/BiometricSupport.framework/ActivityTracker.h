
@interface ActivityTracker : NSObject {
    id /* block */  _activityUpdateBlock;
    NSString * _description;
    NSObject<OS_os_transaction> * _transaction;
}

@property (copy) id /* block */ activityUpdateBlock;

- (void).cxx_destruct;
- (id /* block */)activityUpdateBlock;
- (id)initWithDescription:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setActivityUpdateBlock:(id /* block */)arg1;

@end

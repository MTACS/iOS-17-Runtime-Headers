
@interface MPNotificationObserver : NSObject {
    id /* block */  _handler;
    long long  _handlerCallCount;
    NSString * _name;
    id  _object;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (void)_handleNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)handler;
- (id)initWithName:(id)arg1 object:(id)arg2 handler:(id /* block */)arg3;
- (id)name;
- (id)object;

@end


@interface NTKDarwinNotificationCenterObserver : NSObject {
    id /* block */  _block;
    NSString * _notificationName;
    NSObject * _observerObject;
    SEL  _selector;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) NSString *notificationName;
@property (nonatomic) NSObject *observerObject;
@property (nonatomic) SEL selector;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)isEqual:(id)arg1;
- (id)notificationName;
- (id)observerObject;
- (SEL)selector;
- (void)setBlock:(id /* block */)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setObserverObject:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end


@interface CAMPriorityNotificationCenterEntry : NSObject {
    id  _object;
    id  _observer;
    SEL  _selector;
}

@property (nonatomic, retain) id object;
@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)object;
- (id)observer;
- (SEL)selector;
- (void)setObject:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end

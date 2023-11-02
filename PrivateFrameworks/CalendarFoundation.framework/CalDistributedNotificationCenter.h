
@interface CalDistributedNotificationCenter : NSObject {
    NSMutableDictionary * _handlers;
}

@property (nonatomic, retain) NSMutableDictionary *handlers;

+ (void)_handleNotification:(id)arg1;
+ (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
+ (id)defaultCenter;
+ (void)removeObserver:(id)arg1;
+ (void)removeObserver:(id)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)handlers;
- (id)init;
- (void)setHandlers:(id)arg1;

@end

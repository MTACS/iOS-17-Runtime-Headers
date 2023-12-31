
@interface CMGestureManager : NSObject {
    id  _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (bool)isGestureServiceAvailable;
+ (bool)isGestureServiceEnabled;
+ (void)setGestureServiceEnabled:(bool)arg1;

- (void)dealloc;
- (id /* block */)gestureHandler;
- (id)init;
- (id)initWithPriority:(int)arg1;
- (void)setGestureHandler:(id /* block */)arg1;

@end

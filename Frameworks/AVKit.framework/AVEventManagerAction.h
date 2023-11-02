
@interface AVEventManagerAction : NSObject {
    NSString * _event;
}

@property (nonatomic, readonly) NSString *event;

+ (id)actionWithBlock:(id /* block */)arg1 event:(id)arg2;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 event:(id)arg3;

- (void).cxx_destruct;
- (id)event;
- (bool)hasMatchingEvent:(id)arg1;
- (bool)hasMatchingTarget:(id)arg1 withSelector:(SEL)arg2 forEvent:(id)arg3;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)sendAction:(id)arg1;

@end

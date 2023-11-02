
@interface CLTimerWeakHolder : NSObject {
    CLTimer * _timer;
}

@property (nonatomic, readonly) CLTimer *timer;

+ (id)holderWithTimer:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTimer:(id)arg1;
- (id)timer;

@end

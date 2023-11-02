
@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer> {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)eventDidOccur:(id /* block */)arg1;
- (id /* block */)handler;
- (void)registerEventForCoalescingWithLabel:(id)arg1 handler:(id /* block */)arg2;
- (void)setHandler:(id /* block */)arg1;

@end

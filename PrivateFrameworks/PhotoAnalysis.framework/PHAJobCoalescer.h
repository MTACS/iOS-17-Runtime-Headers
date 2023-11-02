
@interface PHAJobCoalescer : NSObject {
    <PHAJobCoalescerDelegate> * _delegate;
}

@property (nonatomic) <PHAJobCoalescerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addJob:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end

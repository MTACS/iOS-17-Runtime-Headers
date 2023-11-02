
@interface STDebouncer : NSObject {
    <STDebouncerDelegate> * _delegate;
    double  _maxCoalescenceInterval;
    double  _minCoalescenceInterval;
    id  _value;
}

@property (nonatomic) <STDebouncerDelegate> *delegate;
@property (nonatomic) double maxCoalescenceInterval;
@property (nonatomic) double minCoalescenceInterval;
@property (retain) id value;

- (void).cxx_destruct;
- (void)_delegate;
- (void)_idle;
- (void)_timeout;
- (void)bounce:(id)arg1;
- (id)delegate;
- (id)initWithMinCoalescenceInterval:(double)arg1 maxCoalescenceInterval:(double)arg2;
- (double)maxCoalescenceInterval;
- (double)minCoalescenceInterval;
- (void)setDelegate:(id)arg1;
- (void)setMaxCoalescenceInterval:(double)arg1;
- (void)setMinCoalescenceInterval:(double)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

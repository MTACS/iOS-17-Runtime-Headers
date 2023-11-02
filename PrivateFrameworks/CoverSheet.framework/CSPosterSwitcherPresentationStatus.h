
@interface CSPosterSwitcherPresentationStatus : NSObject {
    unsigned long long  _notReadyReason;
    unsigned long long  _state;
}

@property (nonatomic, readonly) unsigned long long notReadyReason;
@property (nonatomic, readonly) bool shouldProvideNotReadyFeedback;
@property (nonatomic, readonly) unsigned long long state;

- (id)initWithState:(unsigned long long)arg1 notReadyReason:(unsigned long long)arg2;
- (unsigned long long)notReadyReason;
- (bool)shouldProvideNotReadyFeedback;
- (unsigned long long)state;

@end

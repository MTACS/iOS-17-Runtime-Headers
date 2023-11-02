
@interface STKMutableSessionBehavior : STKSessionBehavior

@property (nonatomic) bool dismissesAfterUserEvent;
@property (nonatomic) bool shouldSendResponseUponDisplay;
@property (nonatomic) double timeout;

- (void)setDismissesAfterUserEvent:(bool)arg1;
- (void)setShouldSendResponseUponDisplay:(bool)arg1;
- (void)setTimeout:(double)arg1;

@end

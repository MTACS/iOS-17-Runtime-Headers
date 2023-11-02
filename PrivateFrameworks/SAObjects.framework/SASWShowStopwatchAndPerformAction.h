
@interface SASWShowStopwatchAndPerformAction : SAUISnippet

@property (nonatomic, copy) NSString *stopwatchAction;

+ (id)showStopwatchAndPerformAction;
+ (id)showStopwatchAndPerformActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStopwatchAction:(id)arg1;
- (id)stopwatchAction;

@end


@interface _CNObservableEventBufferingStrategy : NSObject

+ (id)strategyWithEvents:(id)arg1;
+ (id)strategyWithQueue:(id)arg1;

- (void)addEvent:(id)arg1;
- (id)allEvents;
- (bool)isSequenceTerminated;

@end

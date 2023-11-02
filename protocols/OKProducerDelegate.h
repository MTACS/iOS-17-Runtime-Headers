
@protocol OKProducerDelegate <NSObject>

@required

- (void)producer:(OKProducer *)arg1 didProcessLiveAuthoringKeyPaths:(NSArray *)arg2;
- (NSArray *)visibleMediaItemsForProducer:(OKProducer *)arg1;

@end

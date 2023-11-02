
@protocol PGLibraryChangeProducer <NSObject>

@required

- (void)consumer:(id <PGLibraryChangeConsumer>)arg1 didConsumeChangeTokens:(NSArray *)arg2;
- (void)consumer:(id <PGLibraryChangeConsumer>)arg1 didIgnoreChangeTokens:(NSArray *)arg2;

@end

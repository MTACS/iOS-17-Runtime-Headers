
@protocol SVXClientSessionStateServicing <NSObject>

@required

- (long long)currentState;
- (<SVXClientSessionStateServiceDelegate> *)delegate;
- (void)fetchStateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setDelegate:(id <SVXClientSessionStateServiceDelegate>)arg1;

@end

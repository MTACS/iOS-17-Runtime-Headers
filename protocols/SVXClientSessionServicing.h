
@protocol SVXClientSessionServicing <NSObject>

@required

- (long long)currentState;
- (<SVXClientSessionServiceDelegate> *)delegate;
- (void)fetchAlarmAndTimerFiringContextWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXAlarmAndTimerFiringContext *, void*
- (void)fetchStateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setDelegate:(id <SVXClientSessionServiceDelegate>)arg1;

@end


@protocol AFArbitrationEventUpdatesDelegate <NSObject>

@required

- (void)arbitrationDidUpdateWithContext:(void *)arg1 session:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AFArbitrationParticipationContext *, AFMyriadSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)arbitrationEndedAdvertising:(AFMyriadSession *)arg1;
- (void)arbitrationEndedTask:(AFMyriadSession *)arg1;
- (void)arbitrationSessionWillStart:(AFMyriadSession *)arg1;
- (void)requestWillPresentUsefulUserResult:(AFMyriadSession *)arg1;

@end

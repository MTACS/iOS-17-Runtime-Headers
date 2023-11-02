
@interface CATSharingBroadcastTerminal : NSObject {
    bool  _broadcasting;
    CATOperationQueue * _delegationQueue;
    <CATSharingBroadcastPrimitives> * mBroadcastPrimitive;
    <CATSharingBroadcastTerminalDelegate> * mDelegate;
    CATOperationQueue * mDelegationQueue;
    bool  mInvalidated;
    bool  mIsDisplayingPIN;
}

@property (getter=isBroadcasting, nonatomic) bool broadcasting;
@property (nonatomic, readonly) CATOperationQueue *delegationQueue;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidateWithError:(id)arg1 removePrimitiveHandlers:(bool)arg2 deactivatePrimitives:(bool)arg3;
- (void)activate;
- (void)addPrimitiveHandlers;
- (id)delegationQueue;
- (id)initWithBroadcastPrimitives:(id)arg1 delegate:(id)arg2 delegationQueue:(id)arg3;
- (void)invalidate;
- (bool)isBroadcasting;
- (void)removePrimitiveHandlers;
- (void)sessionHasPaired;
- (void)sessionNeedsToDisplayPin:(id)arg1;
- (void)setBroadcasting:(bool)arg1;

@end

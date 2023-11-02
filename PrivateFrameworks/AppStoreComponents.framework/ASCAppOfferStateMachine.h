
@interface ASCAppOfferStateMachine : NSObject {
    NSMutableArray * _delegates;
    ASCAppOfferSavedState * _mostRecentState;
    NSString * _mostRecentStatusText;
    <ASCOffer> * _offer;
    ASCAppOfferSavedState * _overrideState;
    ASCAppOfferStateCenter * _stateCenter;
}

@property (nonatomic, readonly) NSMutableArray *delegates;
@property (nonatomic, retain) ASCAppOfferSavedState *mostRecentState;
@property (nonatomic, copy) NSString *mostRecentStatusText;
@property (nonatomic, readonly) <ASCOffer> *offer;
@property (nonatomic, retain) ASCAppOfferSavedState *overrideState;
@property (nonatomic, readonly) ASCAppOfferStateCenter *stateCenter;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)delegates;
- (void)enumerateDelegatesUsingBlock:(id /* block */)arg1;
- (id)initWithOffer:(id)arg1 stateCenter:(id)arg2;
- (void)installTemporaryWaitingState;
- (void)invalidateTemporaryStateForcingUpdate:(bool)arg1;
- (id)mostRecentState;
- (id)mostRecentStatusText;
- (id)offer;
- (void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 flags:(long long)arg3;
- (void)offerStatusTextDidChange:(id)arg1;
- (id)overrideState;
- (id)performActionWithActivity:(id)arg1 inContext:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)setMostRecentState:(id)arg1;
- (void)setMostRecentStatusText:(id)arg1;
- (void)setOverrideState:(id)arg1;
- (id)stateCenter;

@end

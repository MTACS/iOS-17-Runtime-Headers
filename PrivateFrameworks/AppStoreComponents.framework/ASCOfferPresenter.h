
@interface ASCOfferPresenter : NSObject <ASCAppOfferStateMachineDelegate> {
    ASCPresenterContext * _context;
    NSString * _mostRecentAppState;
    <ASCOfferPresenterObserver> * _observer;
    <ASCOffer> * _offer;
    ASCAppOfferStateMachine * _offerStateMachine;
    ASCOfferPresenterViewState * _savedStateForConfirm;
    <ASCOfferPresenterView> * _view;
}

@property (nonatomic, readonly) ASCPresenterContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mostRecentAppState;
@property (nonatomic) <ASCOfferPresenterObserver> *observer;
@property (nonatomic, copy) <ASCOffer> *offer;
@property (nonatomic, retain) ASCAppOfferStateMachine *offerStateMachine;
@property (nonatomic, retain) ASCOfferPresenterViewState *savedStateForConfirm;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ASCOfferPresenterView> *view;

- (void).cxx_destruct;
- (bool)clearConfirmForNewStateIfNeeded;
- (bool)confirmOfferActionIfNeeded;
- (id)context;
- (id)description;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 context:(id)arg2;
- (id)mostRecentAppState;
- (id)observer;
- (id)offer;
- (void)offerStateDidChange:(id)arg1 withMetadata:(id)arg2 isActionable:(bool)arg3;
- (id)offerStateMachine;
- (void)offerStatusTextDidChange:(id)arg1;
- (void)performOfferAction;
- (id)savedStateForConfirm;
- (void)setMostRecentAppState:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setOfferStateMachine:(id)arg1;
- (void)setSavedStateForConfirm:(id)arg1;
- (id)view;

@end

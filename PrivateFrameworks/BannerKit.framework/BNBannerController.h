
@interface BNBannerController : NSObject <BNConsideringDelegate, BNPosting, BNPostingPrivate, BNSuspendable> {
    <BNConsidering> * _authority;
    NSTimer * _autoDequeueTimer;
    struct { 
        unsigned int implementsShouldPost : 1; 
        unsigned int implementsShouldPresent : 1; 
    }  _bannerAuthorityFlags;
    <BNRequesterPending> * _pender;
    NSMapTable * _presentablesInducingSuspensionToSuspendedRequesterIDs;
    <BNPresenting> * _presenter;
}

@property (nonatomic, readonly) <BNConsidering> *authority;
@property (getter=_autoDequeueTimer, setter=_setAutoDequeueTimer:, nonatomic, retain) NSTimer *autoDequeueTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BNRequesterPending> *pender;
@property (nonatomic, readonly) <BNPresenting> *presenter;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_activeSuspensionReasons;
- (id)_autoDequeueTimer;
- (void)_cancelAutoDequeueTimer;
- (bool)_isSuspended;
- (bool)_presentNextPendingPresentableIfPossible;
- (bool)_presentNextPendingPresentableIfPossible:(out id*)arg1;
- (bool)_presentPresentableWithContext:(id)arg1;
- (void)_resumeForResponsiblePresentableIfNecessary:(id)arg1;
- (void)_resumeForResponsiblePresentableIfNecessaryWithIdentification:(id)arg1;
- (id)_revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(id)arg4 userInfo:(id)arg5 error:(out id*)arg6;
- (void)_setAuthority:(id)arg1;
- (void)_setAutoDequeueTimer:(id)arg1;
- (bool)_shouldPostPresentable:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
- (bool)_shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;
- (void)_startAutoDequeueTimerIfNecessary;
- (void)_suspendPenderForRequesterIdentifier:(id)arg1 withResponsiblePresentable:(id)arg2;
- (id)_suspensionReasonForEnqueuedPresentable:(id)arg1;
- (id)authority;
- (void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2;
- (id)initWithAuthority:(id)arg1 pender:(id)arg2 presenter:(id)arg3;
- (id)pender;
- (bool)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;
- (id)presenter;
- (bool)revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (bool)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(bool)arg5 userInfo:(id)arg6 error:(out id*)arg7;
- (bool)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 userInfo:(id)arg5 error:(out id*)arg6;
- (id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(bool)arg4 userInfo:(id)arg5 error:(id*)arg6;
- (id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2 revokingCurrent:(bool)arg3 error:(out id*)arg4;

@end

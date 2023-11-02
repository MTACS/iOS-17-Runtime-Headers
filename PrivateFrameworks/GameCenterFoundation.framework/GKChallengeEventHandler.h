
@interface GKChallengeEventHandler : NSObject {
    <GKChallengeEventHandlerDelegate> * _delegate;
    GKChallengeInternal * _pendingCompletedChallenge;
    GKChallengeInternal * _pendingReceivedChallenge;
    <GKChallengeEventHandlerUIDelegate> * _uiDelegate;
}

@property (nonatomic) <GKChallengeEventHandlerDelegate> *delegate;
@property (nonatomic, retain) GKChallengeInternal *pendingCompletedChallenge;
@property (nonatomic, retain) GKChallengeInternal *pendingReceivedChallenge;
@property (nonatomic, retain) <GKChallengeEventHandlerUIDelegate> *uiDelegate;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)challengeEventHandler;

- (void).cxx_destruct;
- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (id)delegate;
- (id)pendingCompletedChallenge;
- (id)pendingReceivedChallenge;
- (void)receivedChallengeSelected:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingCompletedChallenge:(id)arg1;
- (void)setPendingReceivedChallenge:(id)arg1;
- (void)setUiDelegate:(id)arg1;
- (void)showBannerForChallenge:(id)arg1 complete:(id /* block */)arg2;
- (id)uiDelegate;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (Class)uiDelegateClass;

@end

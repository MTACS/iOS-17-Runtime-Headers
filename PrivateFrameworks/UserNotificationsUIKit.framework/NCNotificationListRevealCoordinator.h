
@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate> {
    <NCNotificationListRevealCoordinatorDelegate> * _delegate;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    bool  _forceRevealed;
    bool  _hapticPrepared;
    unsigned long long  _indexForReveal;
    double  _interactionTranslation;
    double  _revealPercentage;
    int  _revealState;
    bool  _sectionRevealed;
    bool  _sectionRevealedStateLocked;
    bool  _shouldLimitTargetContentOffsetForNotificationListReveal;
    NSArray * _subLists;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListRevealCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (getter=isForceRevealed, nonatomic) bool forceRevealed;
@property (getter=isHapticPrepared, nonatomic) bool hapticPrepared;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexForReveal;
@property (nonatomic) double interactionTranslation;
@property (nonatomic) double revealPercentage;
@property (nonatomic) int revealState;
@property (getter=isSectionRevealed, nonatomic) bool sectionRevealed;
@property (getter=isSectionRevealedStateLocked, nonatomic) bool sectionRevealedStateLocked;
@property (nonatomic) bool shouldLimitTargetContentOffsetForNotificationListReveal;
@property (nonatomic, retain) NSArray *subLists;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isRevealSectionVisibleForListView:(id)arg1;
- (bool)_isRevealed;
- (void)_performHaptic;
- (void)_performRevealForSubviewsIfNecessary;
- (void)_prepareHaptic;
- (void)_refetchSubListViews;
- (void)_releaseHaptic;
- (id)_revealListView;
- (bool)_revealSectionHasContent;
- (double)_settlingYPositionForReveal;
- (bool)_shouldAllowNotificationListReveal;
- (bool)_shouldAllowNotificationListRevealTransition;
- (id)_stringForRevealState:(int)arg1;
- (double)_updateRevealPercentageForNotificationListView:(id)arg1;
- (id)delegate;
- (id)feedbackGenerator;
- (unsigned long long)indexForReveal;
- (double)interactionTranslation;
- (bool)isForceRevealed;
- (bool)isHapticPrepared;
- (bool)isSectionRevealed;
- (bool)isSectionRevealedStateLocked;
- (void)notificationListDidScroll:(id)arg1;
- (void)notificationListViewDidEndDecelerating:(id)arg1;
- (void)notificationListViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)notificationListViewWillEndDragging:(id)arg1 withTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)notificationListWillBeginDragging:(id)arg1;
- (double)revealPercentage;
- (int)revealState;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setForceRevealed:(bool)arg1;
- (void)setHapticPrepared:(bool)arg1;
- (void)setIndexForReveal:(unsigned long long)arg1;
- (void)setInteractionTranslation:(double)arg1;
- (void)setRevealPercentage:(double)arg1;
- (void)setRevealState:(int)arg1;
- (void)setSectionRevealed:(bool)arg1;
- (void)setSectionRevealedStateLocked:(bool)arg1;
- (void)setShouldLimitTargetContentOffsetForNotificationListReveal:(bool)arg1;
- (void)setSubLists:(id)arg1;
- (bool)shouldLimitTargetContentOffsetForNotificationListReveal;
- (id)subLists;

@end

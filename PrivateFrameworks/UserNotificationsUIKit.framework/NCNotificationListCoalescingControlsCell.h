
@interface NCNotificationListCoalescingControlsCell : UIView <MTMaterialGrouping, NCNotificationListCoalescingControlsHandler, NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _clearAllText;
    NCNotificationListCoalescingControlsView * _coalescingControlsView;
    bool  _footerCell;
    <NCNotificationListCoalescingControlsHandlerDelegate> * _handlerDelegate;
    NSString * _materialGroupNameBase;
    bool  _shouldShowCoalescingControls;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) NSString *clearAllText;
@property (nonatomic, retain) NCNotificationListCoalescingControlsView *coalescingControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFooterCell, nonatomic) bool footerCell;
@property (nonatomic) <NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) bool shouldShowCoalescingControls;
@property (readonly) Class superclass;

+ (double)coalescingControlsCellHeightShowingCoalescingControls:(bool)arg1;

- (void).cxx_destruct;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)clearAllText;
- (id)coalescingControlsView;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1;
- (bool)dismissModalFullScreenIfNeeded;
- (id)handlerDelegate;
- (bool)isFooterCell;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setClearAllText:(id)arg1;
- (void)setCoalescingControlsView:(id)arg1;
- (void)setFooterCell:(bool)arg1;
- (void)setHandlerDelegate:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setShouldShowCoalescingControls:(bool)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldShowCoalescingControls;

@end

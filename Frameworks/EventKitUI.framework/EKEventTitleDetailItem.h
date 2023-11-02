
@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    EKEventDetailTitleCell * _cell;
    bool  _cellNeedsUpdate;
    NSObject<EKEventTitleDetailItemDelegate> * _editDelegate;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    bool  _hidesBottomSeparator;
    bool  _hidesTopSeparator;
    unsigned long long  _numberOfTitleLines;
    NSDate * _proposedTime;
}

@property (nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) bool hidesBottomSeparator;
@property (nonatomic) bool hidesTopSeparator;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic, retain) NSDate *proposedTime;
@property (nonatomic, readonly) UIView *sourceViewForPopover;

- (void).cxx_destruct;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (void)editButtonPressed;
- (id)editDelegate;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (bool)hidesBottomSeparator;
- (bool)hidesTopSeparator;
- (bool)minimalMode;
- (unsigned long long)numberOfTitleLines;
- (id)owningViewController;
- (void)predictionWasActedOn;
- (id)proposedTime;
- (void)refreshCopiedEvents;
- (void)refreshForHeightChange;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setHidesBottomSeparator:(bool)arg1;
- (void)setHidesTopSeparator:(bool)arg1;
- (void)setNumberOfTitleLines:(unsigned long long)arg1;
- (void)setProposedTime:(id)arg1;
- (bool)shouldShowEditButtonInline;
- (bool)showsDetectedConferenceItem;
- (id)sourceViewForPopover;
- (void)titleCell:(id)arg1 requestPresentShareSheetWithActivityItems:(id)arg2 withPopoverSourceView:(id)arg3;
- (bool)titleCellShouldPresentShareSheet:(id)arg1;
- (double)titleHeight;

@end

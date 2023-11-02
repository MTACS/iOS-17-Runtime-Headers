
@interface EKEventDetailTitleCell : EKEventDetailCell <ConferenceCellDelegate, EKEventDetailSuggestedLocationCellDelegate, UITextViewDelegate> {
    EKEventDetailConferenceCell * _conferenceDetailView;
    NSMutableArray * _dateTimeViews;
    NSObject<EKEventDetailTitleCellDelegate> * _delegate;
    UIButton * _editButton;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    bool  _hideBottomCellSeparator;
    bool  _hideTopCellSeparator;
    int  _lastPosition;
    NSMutableArray * _locationItems;
    unsigned long long  _numberOfTitleLines;
    bool  _observingLocaleChanges;
    UILabel * _recurrenceView;
    bool  _showAllLocation;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _showLocationRange;
    bool  _showingInlineDayView;
    UILabel * _statusView;
    EKEventDetailSuggestedLocationCell * _suggestedLocationCell;
    UILabel * _titleView;
    UILabel * _travelTimeView;
    unsigned int  _visibleItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic) bool showingInlineDayView;
@property (nonatomic, readonly) UIView *sourceViewForPopover;
@property (readonly) Class superclass;

+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (void)_registerForInvalidation;
+ (id)_titleFont;

- (void).cxx_destruct;
- (id)_conferenceDetailView;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_editButton;
- (double)_layoutForWidth:(double)arg1;
- (void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_recurrenceView;
- (void)_saveEventWithSpan:(long long)arg1;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (bool)_shouldShowConferenceCell;
- (id)_statusView;
- (id)_suggestedLocationCell;
- (id)_titleView;
- (id)_travelTimeView;
- (void)_updateSeparatorStyle;
- (bool)_useLargeFonts;
- (void)addLocation:(id)arg1;
- (void)conferenceCell:(id)arg1 requestPresentShareSheetWithActivityItems:(id)arg2 withPopoverSourceView:(id)arg3;
- (bool)conferenceCellShouldPresentShareSheet:(id)arg1;
- (void)conferenceCellUpdated:(id)arg1;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didTapAddSuggestedLocationCell:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)didTapDismissSuggestedLocationCell:(id)arg1;
- (void)editButtonTapped;
- (void)handleTapOnLabel:(id)arg1;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (unsigned long long)numberOfTitleLines;
- (id)owningViewController;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setHideBottomCellSeparator:(bool)arg1;
- (void)setHideTopCellSeparator:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumberOfTitleLines:(unsigned long long)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setShowingInlineDayView:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTimeString:(id)arg1;
- (bool)showingInlineDayView;
- (id)sourceViewForPopover;
- (double)titleHeight;
- (bool)update;

@end

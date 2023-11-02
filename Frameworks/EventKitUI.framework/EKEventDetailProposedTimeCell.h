
@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee * _attendee;
    UIView * _bgView;
    EKEventDetailsHighlightControl * _control;
    EKEvent * _event;
    bool  _showsTopSeparator;
    UIView * _topSeparator;
}

@property (nonatomic) bool showsTopSeparator;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (bool)hasCustomLayout;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)shouldDisplayForEvent;
- (bool)showsTopSeparator;
- (bool)update;

@end


@interface EKUIAutocompleteOccurrenceTableViewCell : EKUIAutocompleteSearchResultCell {
    UIImageView * _colorDotView;
    NSArray * _ekUIAutocompleteOccurrenceTableViewCellConstraints;
    UIColor * _eventCalendarColor;
    NSAttributedString * _eventFoundIn;
    NSString * _eventInvitees;
    NSAttributedString * _eventLocation;
    NSString * _eventTimeWithResultTimeZone;
    NSString * _eventTimeWithThisTimeZone;
    NSString * _eventTitle;
    UILabel * _foundInTextLabel;
    UILabel * _inviteesTextLabel;
    UILabel * _locationTextLabel;
    NSArray * _secondaryLabels;
    UILabel * _timeTextLabelWithResultTimeZone;
    UILabel * _timeTextLabelWithThisTimeZone;
    UILabel * _titleTextLabel;
}

+ (id)_foundInStringForResult:(id)arg1 pasteboardEvent:(bool)arg2;
+ (id)_inviteeStringForResult:(id)arg1;
+ (id)_locationStringForResult:(id)arg1;
+ (bool)_shouldShowOtherTimeZoneForResult:(id)arg1;
+ (id)_timeStringForResult:(id)arg1 usingTimeZone:(id)arg2;
+ (id)_titleStringForResult:(id)arg1;
+ (double)cellHeightForResult:(id)arg1 forWidth:(double)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_addConstraintsForLabel:(id)arg1 belowView:(id)arg2 toArray:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabelFonts;
- (void)setupConstraints;
- (void)updateWithResult:(id)arg1;

@end

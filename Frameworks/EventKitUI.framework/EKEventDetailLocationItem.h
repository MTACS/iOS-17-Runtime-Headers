
@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate> {
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    NSString * _locationComment;
    bool  _locationIsAttendee;
    long long  _locationStatus;
    UITapGestureRecognizer * _locationTapRecognizer;
    NSString * _locationTitle;
    NSURL * _locationURL;
    EKTextViewWithLabelTextMetrics * _locationView;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (retain) NSString *locationTitle;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapRecognizer;

+ (bool)isValidLocation:(id)arg1 event:(id)arg2;

- (void).cxx_destruct;
- (void)_locationTapped;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)initWithLocationName:(id)arg1 forEvent:(id)arg2;
- (id)locationTitle;
- (id)locationView;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setLocationTitle:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)tapRecognizer;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateAttributedString;
- (void)updateLocation:(id)arg1 forEvent:(id)arg2;

@end

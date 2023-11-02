
@interface REMReminderCreationContext : NSObject <NSSecureCoding> {
    NSDateComponents * _dueDateComponents;
    CLLocation * _location;
    long long  _locationProximity;
    NSString * _locationString;
    NSAttributedString * _notes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenOriginOffset;
    NSData * _siriFoundInAppsData;
    NSAttributedString * _title;
    bool  _titleIsGeneratedSuggestion;
    NSURL * _url;
    NSUserActivity * _userActivity;
    bool  _wantsExtendedDetailOnlyView;
}

@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) long long locationProximity;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic, copy) NSAttributedString *notes;
@property (nonatomic) struct CGPoint { double x1; double x2; } screenOriginOffset;
@property (nonatomic, copy) NSData *siriFoundInAppsData;
@property (nonatomic, copy) NSAttributedString *title;
@property (nonatomic) bool titleIsGeneratedSuggestion;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, retain) NSUserActivity *userActivity;
@property (nonatomic) bool wantsExtendedDetailOnlyView;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dueDateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)location;
- (long long)locationProximity;
- (id)locationString;
- (id)notes;
- (struct CGPoint { double x1; double x2; })screenOriginOffset;
- (void)setDueDateComponents:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationProximity:(long long)arg1;
- (void)setLocationString:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setScreenOriginOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSiriFoundInAppsData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleIsGeneratedSuggestion:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setWantsExtendedDetailOnlyView:(bool)arg1;
- (id)siriFoundInAppsData;
- (id)title;
- (bool)titleIsGeneratedSuggestion;
- (id)url;
- (id)userActivity;
- (bool)wantsExtendedDetailOnlyView;

@end

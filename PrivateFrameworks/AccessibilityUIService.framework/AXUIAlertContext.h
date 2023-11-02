
@interface AXUIAlertContext : NSObject {
    AXUIAlert * _alertView;
    double  _creationTimeInterval;
    double  _duration;
    double  _fadeAnimationDuration;
    UIImage * _iconImage;
    NSString * _identifier;
    unsigned long long  _priority;
    <AXUIService> * _service;
    AXDispatchTimer * _showOrHideTimer;
    NSString * _subtitleText;
    NSString * _text;
    unsigned long long  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) AXUIAlert *alertView;
@property (nonatomic) double creationTimeInterval;
@property (nonatomic) double duration;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) <AXUIService> *service;
@property (nonatomic, retain) AXDispatchTimer *showOrHideTimer;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)alertView;
- (double)creationTimeInterval;
- (id)description;
- (double)duration;
- (double)fadeAnimationDuration;
- (id)iconImage;
- (id)identifier;
- (unsigned long long)priority;
- (id)service;
- (void)setAlertView:(id)arg1;
- (void)setCreationTimeInterval:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeAnimationDuration:(double)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setShowOrHideTimer:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)showOrHideTimer;
- (id)subtitleText;
- (id)text;
- (unsigned long long)type;
- (id)userInfo;

@end

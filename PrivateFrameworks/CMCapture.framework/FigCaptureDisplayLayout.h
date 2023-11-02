
@interface FigCaptureDisplayLayout : NSObject {
    bool  _contactlessUIServiceVisible;
    long long  _displayType;
    NSArray * _foregroundApps;
    NSArray * _obscuredApps;
    NSArray * _pipApps;
    bool  _siriVisible;
    NSDate * _timestamp;
    NSArray * _transitioningApps;
}

@property (getter=isContactlessUIServiceVisible, nonatomic) bool contactlessUIServiceVisible;
@property (nonatomic) long long displayType;
@property (nonatomic, retain) NSArray *foregroundApps;
@property (nonatomic, retain) NSArray *obscuredApps;
@property (nonatomic, retain) NSArray *pipApps;
@property (getter=isSiriVisible, nonatomic) bool siriVisible;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSArray *transitioningApps;

+ (void)initialize;

- (id)_init;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (long long)displayType;
- (id)foregroundApps;
- (bool)isContactlessUIServiceVisible;
- (bool)isSiriVisible;
- (id)obscuredApps;
- (id)pipApps;
- (void)setContactlessUIServiceVisible:(bool)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)setForegroundApps:(id)arg1;
- (void)setObscuredApps:(id)arg1;
- (void)setPipApps:(id)arg1;
- (void)setSiriVisible:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTransitioningApps:(id)arg1;
- (id)timestamp;
- (id)transitioningApps;

@end


@interface SFSearchViewAppearFeedback : SFFeedback {
    bool  _isOnLockScreen;
    bool  _isOverApp;
    bool  _isUsingLoweredSearchBar;
    NSString * _originatingApp;
    NSString * _preexistingInput;
    bool  _readerTextAvailable;
    unsigned long long  _viewAppearEvent;
}

@property (nonatomic) bool isOnLockScreen;
@property (nonatomic) bool isOverApp;
@property (nonatomic) bool isUsingLoweredSearchBar;
@property (nonatomic, copy) NSString *originatingApp;
@property (nonatomic, copy) NSString *preexistingInput;
@property (nonatomic) bool readerTextAvailable;
@property (nonatomic) unsigned long long viewAppearEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (bool)isUsingLoweredSearchBar;
- (id)originatingApp;
- (id)preexistingInput;
- (bool)readerTextAvailable;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setIsUsingLoweredSearchBar:(bool)arg1;
- (void)setOriginatingApp:(id)arg1;
- (void)setPreexistingInput:(id)arg1;
- (void)setReaderTextAvailable:(bool)arg1;
- (void)setViewAppearEvent:(unsigned long long)arg1;
- (unsigned long long)viewAppearEvent;

@end

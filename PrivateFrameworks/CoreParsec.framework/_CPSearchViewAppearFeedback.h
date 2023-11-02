
@interface _CPSearchViewAppearFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSearchViewAppearFeedback> {
    bool  _isOnLockScreen;
    bool  _isOverApp;
    bool  _isUsingLoweredSearchBar;
    NSString * _originatingApp;
    NSString * _preexistingInput;
    bool  _readerTextAvailable;
    unsigned long long  _timestamp;
    int  _viewAppearEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOnLockScreen;
@property (nonatomic) bool isOverApp;
@property (nonatomic) bool isUsingLoweredSearchBar;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *originatingApp;
@property (nonatomic, copy) NSString *preexistingInput;
@property (nonatomic) bool readerTextAvailable;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int viewAppearEvent;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOnLockScreen;
- (bool)isOverApp;
- (bool)isUsingLoweredSearchBar;
- (id)originatingApp;
- (id)preexistingInput;
- (bool)readFrom:(id)arg1;
- (bool)readerTextAvailable;
- (void)setIsOnLockScreen:(bool)arg1;
- (void)setIsOverApp:(bool)arg1;
- (void)setIsUsingLoweredSearchBar:(bool)arg1;
- (void)setOriginatingApp:(id)arg1;
- (void)setPreexistingInput:(id)arg1;
- (void)setReaderTextAvailable:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewAppearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewAppearEvent;
- (void)writeTo:(id)arg1;

@end

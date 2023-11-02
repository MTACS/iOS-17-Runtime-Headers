
@interface FCPresentationOperation : NSObject {
    bool  _endsPresentationSession;
    NSNumber * _maxPrecedingSameSessionPresentations;
    NSNumber * _maxPresentationAttempts;
    long long  _requiredAppLaunchCount;
    long long  _suppressOnLaunchConditions;
    NSString * _uid;
}

@property (nonatomic) bool endsPresentationSession;
@property (nonatomic, retain) NSNumber *maxPrecedingSameSessionPresentations;
@property (nonatomic, retain) NSNumber *maxPresentationAttempts;
@property (nonatomic) long long requiredAppLaunchCount;
@property (nonatomic) long long suppressOnLaunchConditions;
@property (nonatomic, copy) NSString *uid;

- (void).cxx_destruct;
- (bool)endsPresentationSession;
- (id)initWithConfigDictionary:(id)arg1;
- (id)maxPrecedingSameSessionPresentations;
- (id)maxPresentationAttempts;
- (long long)requiredAppLaunchCount;
- (void)setEndsPresentationSession:(bool)arg1;
- (void)setMaxPrecedingSameSessionPresentations:(id)arg1;
- (void)setMaxPresentationAttempts:(id)arg1;
- (void)setRequiredAppLaunchCount:(long long)arg1;
- (void)setSuppressOnLaunchConditions:(long long)arg1;
- (void)setUid:(id)arg1;
- (long long)suppressOnLaunchConditions;
- (id)uid;

@end

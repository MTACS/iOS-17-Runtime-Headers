
@interface VUIRentalExpirationLabel : VUILabel {
    bool  _contentIsAvailable;
    <VUIRentalExpirationLabelDelegate> * _delegate;
    NSDate * _expirationDate;
    NSTimer * _expiryUpdateTimer;
    bool  _forDownload;
    NSString * _locStringPrefix;
    bool  _useWarningColor;
}

@property (nonatomic) bool contentIsAvailable;
@property (nonatomic) <VUIRentalExpirationLabelDelegate> *delegate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) NSTimer *expiryUpdateTimer;
@property (nonatomic) bool forDownload;
@property (nonatomic, copy) NSString *locStringPrefix;
@property (nonatomic) bool useWarningColor;

+ (id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(bool*)arg2 updateInterval:(long long*)arg3 locStringPrefix:(id)arg4;
+ (id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long*)arg2 locStringPrefix:(id)arg3;
+ (id)labelForRentalExpirationDate:(id)arg1 downloadExpirationDate:(id)arg2 contentAvailabilityDate:(id)arg3 downloadStatus:(unsigned long long)arg4;
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4;
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4 forDownload:(bool)arg5 contentIsAvailable:(bool)arg6;
+ (id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 locStringPrefix:(id)arg4 useWarningColor:(bool)arg5;
+ (id)labelWithTextLayout:(id)arg1 existingLabel:(id)arg2 locStringPrefix:(id)arg3;

- (void).cxx_destruct;
- (void)_computeExpirationLabel:(id)arg1;
- (bool)contentIsAvailable;
- (void)dealloc;
- (id)delegate;
- (id)expirationDate;
- (id)expiryUpdateTimer;
- (bool)forDownload;
- (void)invalidateTimer;
- (id)locStringPrefix;
- (void)setContentIsAvailable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpiryUpdateTimer:(id)arg1;
- (void)setForDownload:(bool)arg1;
- (void)setLocStringPrefix:(id)arg1;
- (void)setUseWarningColor:(bool)arg1;
- (bool)useWarningColor;
- (void)vui_willMoveToWindow:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

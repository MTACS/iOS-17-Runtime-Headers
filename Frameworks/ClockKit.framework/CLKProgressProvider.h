
@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {
    double  _backgroundRingAlpha;
    bool  _finalized;
    unsigned long long  _nextUpdateToken;
    bool  _paused;
    CLKClockTimerToken * _timerToken;
    UIColor * _tintColor;
    NSMutableDictionary * _updateHandlersByToken;
}

@property double backgroundRingAlpha;
@property (nonatomic, readonly) bool needsTimerUpdates;
@property (nonatomic) bool paused;
@property (nonatomic, retain) UIColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_commonInit;
- (void)_maybeStartOrStopUpdates;
- (bool)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;
- (void)_update;
- (void)_validate;
- (double)backgroundRingAlpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsTimerUpdates;
- (bool)paused;
- (double)progressFractionForNow:(id)arg1;
- (void)setBackgroundRingAlpha:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (long long)timeTravelUpdateFrequency;
- (id)tintColor;
- (bool)validate;

@end

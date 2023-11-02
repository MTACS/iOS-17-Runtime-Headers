
@interface WBSPerSitePreferenceTimeout : NSObject {
    id  _fallbackValue;
    double  _interval;
}

@property (nonatomic, readonly) id fallbackValue;
@property (nonatomic, readonly) double interval;

+ (id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2;

- (void).cxx_destruct;
- (id)fallbackValue;
- (id)initWithInterval:(double)arg1 fallbackValue:(id)arg2;
- (double)interval;

@end

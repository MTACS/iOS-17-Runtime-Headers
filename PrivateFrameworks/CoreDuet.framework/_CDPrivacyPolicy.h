
@interface _CDPrivacyPolicy : NSObject {
    bool  canPersistOnStorage;
    double  temporalPrecision;
}

@property (nonatomic, readonly) bool canPersistOnStorage;
@property (nonatomic, readonly) double temporalPrecision;

+ (id)sharedPrivacyPolicy;

- (bool)canPersistOnStorage;
- (id)description;
- (id)init;
- (id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(bool)arg2;
- (double)temporalPrecision;

@end

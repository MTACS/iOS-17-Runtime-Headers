
@interface VUIAgeVerification : NSObject {
    bool  _isAgeVerificationEnabled;
    NSNumber * _minMovieRatingRequiringAgeVerification;
    NSNumber * _minTvRatingRequiringAgeVerification;
    id  _notificationToken;
}

@property (nonatomic) bool isAgeVerificationEnabled;
@property (nonatomic, retain) NSNumber *minMovieRatingRequiringAgeVerification;
@property (nonatomic, retain) NSNumber *minTvRatingRequiringAgeVerification;
@property (nonatomic, retain) id notificationToken;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)configureAgeVerification:(id)arg1;
- (bool)isAgeVerificationEnabled;
- (id)minMovieRatingRequiringAgeVerification;
- (id)minTvRatingRequiringAgeVerification;
- (id)notificationToken;
- (void)performAgeGateVerificationWithRatingValue:(id)arg1 ratingDomain:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsAgeVerificationEnabled:(bool)arg1;
- (void)setMinMovieRatingRequiringAgeVerification:(id)arg1;
- (void)setMinTvRatingRequiringAgeVerification:(id)arg1;
- (void)setNotificationToken:(id)arg1;

@end

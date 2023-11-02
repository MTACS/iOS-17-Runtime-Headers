
@interface MPRatingCommand : MPRemoteCommand {
    float  _maximumRating;
    float  _minimumRating;
}

@property (nonatomic) float maximumRating;
@property (nonatomic) float minimumRating;

- (id)_mediaRemoteCommandInfoOptions;
- (float)maximumRating;
- (float)minimumRating;
- (id)newCommandEventWithRating:(float)arg1;
- (void)setMaximumRating:(float)arg1;
- (void)setMinimumRating:(float)arg1;

@end

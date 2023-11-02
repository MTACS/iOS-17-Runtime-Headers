
@interface SSVoiceMemosResultBuilder : SSResultBuilder {
    NSDate * _creationDate;
    NSNumber * _durationInSeconds;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSNumber *durationInSeconds;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)creationDate;
- (id)durationInSeconds;
- (id)initWithResult:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDurationInSeconds:(id)arg1;

@end

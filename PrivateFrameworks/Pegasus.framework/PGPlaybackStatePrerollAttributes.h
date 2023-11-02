
@interface PGPlaybackStatePrerollAttributes : NSObject {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) UIColor *preferredTintColor;
@property (nonatomic, readonly) double requiredLinearPlaybackEndTime;

+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2;

- (void).cxx_destruct;
- (long long)contentType;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 contentType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)preferredTintColor;
- (id)preferredTintColorDescription;
- (double)requiredLinearPlaybackEndTime;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

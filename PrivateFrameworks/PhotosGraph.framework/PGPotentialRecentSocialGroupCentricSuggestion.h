
@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject {
    NSArray * _assets;
    NSArray * _momentLocalIdentifiers;
    NSDate * _notSeenSinceDate;
    NSArray * _personLocalIdentifiers;
    NSArray * _personWeights;
    float  _weight;
}

@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, readonly) NSArray *momentLocalIdentifiers;
@property (nonatomic, retain) NSDate *notSeenSinceDate;
@property (nonatomic, readonly) NSArray *personLocalIdentifiers;
@property (nonatomic, readonly) NSArray *personWeights;
@property (nonatomic, readonly) float weight;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5;
- (id)momentLocalIdentifiers;
- (id)notSeenSinceDate;
- (id)personLocalIdentifiers;
- (id)personWeights;
- (void)setAssets:(id)arg1;
- (void)setNotSeenSinceDate:(id)arg1;
- (float)weight;

@end

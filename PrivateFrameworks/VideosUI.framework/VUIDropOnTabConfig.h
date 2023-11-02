
@interface VUIDropOnTabConfig : NSObject {
    NSNumber * _daysWithoutOpeningThreshold;
    NSNumber * _daysWithoutPlaybackThreshold;
    NSString * _dropOnTabIdentifier;
}

@property (nonatomic, retain) NSNumber *daysWithoutOpeningThreshold;
@property (nonatomic, retain) NSNumber *daysWithoutPlaybackThreshold;
@property (nonatomic, retain) NSString *dropOnTabIdentifier;

- (void).cxx_destruct;
- (id)daysWithoutOpeningThreshold;
- (id)daysWithoutPlaybackThreshold;
- (id)dropOnTabIdentifier;
- (id)init;
- (void)setDaysWithoutOpeningThreshold:(id)arg1;
- (void)setDaysWithoutPlaybackThreshold:(id)arg1;
- (void)setDropOnTabIdentifier:(id)arg1;

@end

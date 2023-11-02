
@interface HDStatisticsNoiseLevelConfiguration : NSObject {
    bool  _enableOverlapProcessing;
}

@property (nonatomic) bool enableOverlapProcessing;

- (bool)enableOverlapProcessing;
- (id)initWithOverlapProcessingEnabled:(bool)arg1;
- (void)setEnableOverlapProcessing:(bool)arg1;

@end

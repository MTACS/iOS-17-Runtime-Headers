
@interface BKSTouchStreamPolicy : NSObject {
    bool  _shouldSendAmbiguityRecommendations;
}

@property (nonatomic) bool shouldSendAmbiguityRecommendations;

- (void)setShouldSendAmbiguityRecommendations:(bool)arg1;
- (bool)shouldSendAmbiguityRecommendations;

@end

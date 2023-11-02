
@interface SAAudioAppPredictorOptions : NSObject {
    void trimDisambiguationForRelevance;
}

@property (nonatomic) bool trimDisambiguationForRelevance;

- (id)init;
- (void)setTrimDisambiguationForRelevance:(bool)arg1;
- (bool)trimDisambiguationForRelevance;

@end

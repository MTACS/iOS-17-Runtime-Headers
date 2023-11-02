
@protocol _INPBIntentSlotResolutionMulticardinalResult <NSObject>

@required

+ (Class)resolutionResultsType;

- (void)addResolutionResults:(_INPBIntentSlotResolutionResult *)arg1;
- (void)clearResolutionResults;
- (NSArray *)resolutionResults;
- (_INPBIntentSlotResolutionResult *)resolutionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionResultsCount;
- (void)setResolutionResults:(NSArray *)arg1;

@end

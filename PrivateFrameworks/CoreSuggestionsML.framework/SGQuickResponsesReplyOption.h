
@interface SGQuickResponsesReplyOption : NSObject {
    NSNumber * _position;
    NSNumber * _ucb;
}

@property (nonatomic, readonly) NSNumber *position;
@property (nonatomic, readonly) NSNumber *ucb;

+ (id)imputedDisplayedForRecords:(id)arg1 config:(id)arg2;
+ (id)sortedReplyOptionsForRecords:(id)arg1 config:(id)arg2;
+ (double)totalDisplayedCountForRecords:(id)arg1;
+ (double)ucbCombinedForSelected:(double)arg1 displayed:(double)arg2 actualOptionsDisplayed:(double)arg3 matched:(double)arg4 imputedDisplayed:(double)arg5 imputedOptionsDisplayed:(double)arg6 explorationFactor:(double)arg7;
+ (double)ucbCombinedWithMeanA:(double)arg1 meanB:(double)arg2 varianceA:(double)arg3 varianceB:(double)arg4 explorationFactor:(double)arg5;
+ (double)ucbTunedVarianceForMean:(double)arg1 displayed:(double)arg2 totalDisplayed:(double)arg3;
+ (double)ucbWithMean:(double)arg1 varianceOfMean:(double)arg2 explorationFactor:(double)arg3;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithPosition:(unsigned long long)arg1 records:(id)arg2 actualOptionsDisplayedCount:(double)arg3 imputedOptionsDisplayedCount:(double)arg4 imputedOptionsDisplayed:(id)arg5 config:(id)arg6;
- (id)position;
- (id)ucb;

@end

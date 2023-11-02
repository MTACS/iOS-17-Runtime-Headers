
@interface CDMSpanMatchUtils : NSObject

+ (void)addAsrConfidenceToSpans:(id)arg1 tokenChain:(id)arg2 asrTimingMap:(id)arg3 asrHypothesis:(id)arg4;
+ (void)addEntitySpansFrom:(id)arg1 to:(id)arg2 confidence:(double)arg3;
+ (double)calculateAsrConfidenceForCharIndexBegin:(long long)arg1 charIndexEnd:(long long)arg2 asrTimingMap:(id)arg3 asrHypothesis:(id)arg4;
+ (id)createAsrAlternativeIdentifier:(id)arg1 nameSpace:(id)arg2 nodeIndex:(unsigned int)arg3 backingAppBundleId:(id)arg4 sourceComponent:(int)arg5 asrConfidence:(double)arg6;
+ (bool)isSamePosition:(id)arg1 spanB:(id)arg2 asrMapA:(id)arg3 asrMapB:(id)arg4 cdmTokenChainA:(id)arg5 cdmTokenChainB:(id)arg6;
+ (bool)isSpanOnlyForExternalParsers:(id)arg1;
+ (bool)matcherNameIsSupportedForAsrAlternative:(id)arg1;
+ (void)mergeAsrAlternativeIntoSpan:(id)arg1 asrAltSpan:(id)arg2 asrAltCdmTokenChain:(id)arg3 asrAltHypothesis:(id)arg4 asrAltTimingMap:(id)arg5;
+ (void)postProcessSpans:(id)arg1 asrSpansMap:(id)arg2 asrHypothesis:(id)arg3 asrMaps:(id)arg4 topAsrTokenChain:(id)arg5 asrMapTopAsr:(id)arg6 topAsrSpansFiltered:(id)arg7;
+ (void)processAsrAlternative:(id)arg1 topAsrTokenChain:(id)arg2 cdmTokenChainAltAsr:(id)arg3 asrMapTopAsr:(id)arg4 asrMapAltAsr:(id)arg5 spansTopAsr:(id)arg6 asrHypothesis:(id)arg7;
+ (void)setAsrHypothesisIndexForTopAsrSpans:(id)arg1;

@end

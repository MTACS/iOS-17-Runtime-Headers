
@interface LRRComparatorUtil : NSObject

+ (id)buildEdgIdSignature:(id)arg1;
+ (bool)compareEmbeddingTensor1:(id)arg1 withEmbeddingTensor2:(id)arg2;
+ (bool)compareEntityCandidate1:(id)arg1 withEntityCandidate2:(id)arg2;
+ (bool)compareInternalMDSpanData1:(id)arg1 withMDSpanData2:(id)arg2;
+ (bool)compareInternalMRSpanData1:(id)arg1 withMRSpanData2:(id)arg2;
+ (bool)compareInternalSpanData1:(id)arg1 withInternalSpanData2:(id)arg2;
+ (bool)compareMDMRUsoGraphs:(id)arg1 graph2:(id)arg2;
+ (bool)compareMatchingSpans:(id)arg1 span2:(id)arg2;
+ (bool)compareRRGroupId1:(id)arg1 withRRGroupId2:(id)arg2;
+ (bool)compareSiriCommonStringValue1:(id)arg1 withCommonStringValue2:(id)arg2;
+ (bool)compareToken1:(id)arg1 withToken2:(id)arg2;
+ (bool)compareTokenChain1:(id)arg1 withTokenChain2:(id)arg2;
+ (bool)compareUSOEntityIdentifier1:(id)arg1 withUSOEntityIdentifier2:(id)arg2;
+ (bool)compareUSONode1:(id)arg1 withUSONode2:(id)arg2;
+ (bool)hasDanglingNode:(id)arg1 nodes2:(id)arg2;

@end

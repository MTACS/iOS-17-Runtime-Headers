
@protocol CRTextRecognizer <NSObject, CRConfidenceThresholdProviding>

@required

- (void)cancel;
- (NSArray *)pruneSortAndGroupRegions:(NSArray *)arg1 recognitionResult:(CRRecognitionResult *)arg2;
- (NSArray *)recognizeInImage:(void *)arg1 lineRegions:(void *)arg2 progressHandler:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 10: CRImage *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*, id*
- (NSArray *)sortAndGroupPrunedRegions:(NSArray *)arg1 tableGroups:(NSArray *)arg2;

@end

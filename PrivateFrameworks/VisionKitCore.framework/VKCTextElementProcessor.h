
@interface VKCTextElementProcessor : NSObject

+ (void)addGroupingToDataDetectors:(id)arg1 parentDocument:(id)arg2;
+ (id)dataDetectorElementFromVNBarcodeObservation:(id)arg1 loggingIndex:(long long)arg2;
+ (id)dataDetectorsFromCRDocumentOutputRegion:(id)arg1 shouldFilter:(bool)arg2;
+ (id)textElementsFromCRDocumentOutputRegion:(id)arg1;

@end

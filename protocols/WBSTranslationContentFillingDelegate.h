
@protocol WBSTranslationContentFillingDelegate <NSObject>

@optional

- (void)contentFiller:(id <WBSTranslationContentFilling>)arg1 didCompleteFillingItem:(_WKTextManipulationItem *)arg2 withError:(NSError *)arg3;

@end

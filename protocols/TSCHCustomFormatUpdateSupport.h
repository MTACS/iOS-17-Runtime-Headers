
@protocol TSCHCustomFormatUpdateSupport

@required

- (void)remapCustomFormatKeysWithOldToNewKeyMap:(NSDictionary *)arg1;
- (void)updateAfterPasteForDocumentRoot:(TSKDocumentRoot *)arg1 pasteboardCustomFormatList:(TSKCustomFormatList *)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(TSKDocumentRoot *)arg1;

@end

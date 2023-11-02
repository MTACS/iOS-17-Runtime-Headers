
@protocol TSKCustomFormatContainingInfo

@required

- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(TSUCustomFormat *)arg1 key:(NSUUID *)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (void)upgradeFormatsForCustomFormatListU2_0;

@end

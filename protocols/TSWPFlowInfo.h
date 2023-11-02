
@protocol TSWPFlowInfo <NSObject, TSKDocumentObject, TSKModel, TSDFlowInfo, TSWPTextBoxNesting, TSWPStorageContainer>

@required

+ (TSUColor *)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (TSUColor *)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;

- (bool)containsRotatedOrFlippedTextBox;
- (NSString *)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(bool)arg2;
- (unsigned long long)indexOfTextBox:(TSWPShapeInfo *)arg1;
- (bool)isLocked;
- (void)setTextboxes:(NSArray *)arg1;
- (void)setUserInterfaceIdentifier:(unsigned long long)arg1;
- (unsigned long long)textOrientation;
- (TSWPStorage *)textStorage;
- (NSArray *)textboxes;
- (TSUColor *)userInterfaceFillColor;
- (unsigned long long)userInterfaceIdentifier;
- (TSUColor *)userInterfaceStrokeColor;

@end

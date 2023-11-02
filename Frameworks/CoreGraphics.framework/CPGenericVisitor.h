
@interface CPGenericVisitor : NSObject <CPVisitor>

- (void)visitBody:(id)arg1;
- (void)visitChunk:(id)arg1;
- (void)visitColumn:(id)arg1;
- (void)visitCompoundGraphic:(id)arg1;
- (void)visitImage:(id)arg1;
- (void)visitImageRegion:(id)arg1;
- (void)visitLayoutArea:(id)arg1;
- (void)visitPage:(id)arg1;
- (void)visitParagraph:(id)arg1;
- (void)visitRegion:(id)arg1;
- (void)visitShape:(id)arg1;
- (void)visitShapeRegion:(id)arg1;
- (void)visitTextBox:(id)arg1;
- (void)visitTextLine:(id)arg1;
- (void)visitZone:(id)arg1;

@end

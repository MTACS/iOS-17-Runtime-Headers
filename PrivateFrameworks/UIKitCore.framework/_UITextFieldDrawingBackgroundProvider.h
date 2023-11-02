
@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider {
    bool  _drawsContent;
    struct { 
        unsigned int drawsContentBasedOnTraits : 1; 
    }  _flags;
}

@property (nonatomic) bool drawsContent;

- (void)_buildDescription:(id)arg1;
- (void)_setDrawsContent:(bool)arg1;
- (void)addToTextField:(id)arg1;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsContent;
- (id)init;
- (void)removeFromTextField;
- (void)setDrawsContent:(bool)arg1;
- (void)setDrawsContentBasedOnTraitsIfNeeded;
- (void)setNeedsDisplay;
- (void)traitCollectionDidChange:(id)arg1;

@end

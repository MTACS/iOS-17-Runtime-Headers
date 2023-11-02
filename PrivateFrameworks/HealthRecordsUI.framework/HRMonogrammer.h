
@interface HRMonogrammer : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _monogramSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } monogramSize;

- (id)_monogramSymbolNameWith:(id)arg1;
- (id)_monogramWith:(id)arg1;
- (id)initWithDiameter:(double)arg1;
- (id)makeImageForTitle:(id)arg1;
- (id)monogramForFirstWordFromText:(id)arg1;
- (struct CGSize { double x1; double x2; })monogramSize;
- (id)monogramSymbolNameWith:(id)arg1;
- (void)setMonogramSize:(struct CGSize { double x1; double x2; })arg1;

@end


@interface CUINamedMultisizeImage : CUINamedImage {
    struct CGSize { 
        double width; 
        double height; 
    }  _nextSizeSmaller;
}

@property (nonatomic) struct CGSize { double x1; double x2; } nextSizeSmaller;

- (id)debugDescription;
- (struct CGSize { double x1; double x2; })nextSizeSmaller;
- (void)setNextSizeSmaller:(struct CGSize { double x1; double x2; })arg1;

@end


@interface _CDComplicationImageViewProviderImageView : UIImageView {
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;

- (struct CGSize { double x1; double x2; })maxSize;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;

@end

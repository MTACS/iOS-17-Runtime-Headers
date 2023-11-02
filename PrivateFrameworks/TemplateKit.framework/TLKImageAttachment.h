
@interface TLKImageAttachment : NSTextAttachment {
    bool  _isPlaceholder;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property bool isPlaceholder;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (bool)isPlaceholder;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end


@interface UISSlotEmptyContent : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
}

+ (id)contentWithSize:(struct CGSize { double x1; double x2; })arg1;

- (unsigned char)contentScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)deleteFromLayerContext:(id)arg1;
- (id)image;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isRemote;
- (bool)shouldReplaceExistingContent;

@end

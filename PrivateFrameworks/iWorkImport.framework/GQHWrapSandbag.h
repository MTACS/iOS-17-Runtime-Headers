
@interface GQHWrapSandbag : NSObject {
    bool  mFloatsLeft;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 floatsLeft:(bool)arg2;

@end

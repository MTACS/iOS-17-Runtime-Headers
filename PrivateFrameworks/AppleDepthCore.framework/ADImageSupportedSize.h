
@interface ADImageSupportedSize : NSObject {
    unsigned long long  _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long layout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)createWithSize:(struct CGSize { double x1; double x2; })arg1 andLayout:(unsigned long long)arg2;

- (unsigned long long)layout;
- (struct CGSize { double x1; double x2; })size;

@end

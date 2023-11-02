
@interface PTTensorSwapPair : NSObject {
    NSString * _names;
    struct __CVBuffer {} * _tensorPair;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIOSurfaces:(struct __IOSurface {}**)arg1 names:(id)arg2;
- (id)tensorNameWithIndex:(int)arg1;
- (struct __CVBuffer { }*)tensorWithIndex:(int)arg1;

@end

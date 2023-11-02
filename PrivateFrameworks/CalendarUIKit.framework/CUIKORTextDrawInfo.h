
@interface CUIKORTextDrawInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    id /* block */  _renderingBlock;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) id /* block */ renderingBlock;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)initWithContentSize:(struct CGSize { double x1; double x2; })arg1 renderingBlock:(id /* block */)arg2;
- (id /* block */)renderingBlock;

@end

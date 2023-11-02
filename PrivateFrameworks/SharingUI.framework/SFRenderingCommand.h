
@interface SFRenderingCommand : NSObject {
    id /* block */  _commandBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _contextSize;
}

@property (nonatomic, copy) id /* block */ commandBlock;
@property (nonatomic) struct CGSize { double x1; double x2; } contextSize;

- (void).cxx_destruct;
- (id /* block */)commandBlock;
- (struct CGSize { double x1; double x2; })contextSize;
- (void)setCommandBlock:(id /* block */)arg1;
- (void)setContextSize:(struct CGSize { double x1; double x2; })arg1;

@end

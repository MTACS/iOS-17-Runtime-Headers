
@interface SFInfoFetchRequest : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    id /* block */  _infoResponseHandler;
}

@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, copy) id /* block */ infoResponseHandler;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })iconSize;
- (id /* block */)infoResponseHandler;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInfoResponseHandler:(id /* block */)arg1;

@end

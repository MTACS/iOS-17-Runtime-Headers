
@interface WFActionDrawerImage : NSObject {
    WFImage * _image;
    bool  _shouldAspectFill;
}

@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, readonly) bool shouldAspectFill;

- (void).cxx_destruct;
- (id)image;
- (id)initWithImage:(id)arg1 shouldAspectFill:(bool)arg2;
- (bool)shouldAspectFill;

@end

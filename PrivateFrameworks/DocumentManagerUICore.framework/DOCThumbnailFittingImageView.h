
@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView {
    long long  _generatorGeneration;
    <DOCNode> * _node;
    NSURL * _url;
}

@property (nonatomic) long long generatorGeneration;
@property (nonatomic, readonly) <DOCNode> *node;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)doc_commonInitWithSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)generatorGeneration;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 node:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 url:(id)arg2;
- (id)node;
- (void)setGeneratorGeneration:(long long)arg1;
- (void)updateThumbnail;
- (void)updateThumbnailForNode:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1;
- (id)url;

@end


@interface ISContentLayer : ISLayer {
    bool  _acceptSymbol;
    IFColor * _backgroundColor;
    <ISCompositorResource> * _content;
}

@property (nonatomic) bool acceptSymbol;
@property (nonatomic, retain) IFColor *backgroundColor;
@property (nonatomic, retain) <ISCompositorResource> *content;

- (void).cxx_destruct;
- (bool)acceptSymbol;
- (id)backgroundColor;
- (id)content;
- (id)init;
- (void)setAcceptSymbol:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContent:(id)arg1;

@end

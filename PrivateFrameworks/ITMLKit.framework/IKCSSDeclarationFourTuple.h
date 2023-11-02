
@interface IKCSSDeclarationFourTuple : IKCSSDeclaration {
    IKFourTuple * _fourTuple;
}

@property (nonatomic, retain) IKFourTuple *fourTuple;

- (void).cxx_destruct;
- (id)description;
- (id)fourTuple;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (void)setFourTuple:(id)arg1;
- (id)stringValue;

@end

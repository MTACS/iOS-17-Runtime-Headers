
@interface ICTintedLayer : CALayer {
    id  _originalContents;
    UIColor * _tintColor;
}

@property (nonatomic, retain) id originalContents;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)originalContents;
- (void)setContents:(id)arg1;
- (void)setOriginalContents:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)updateContents;

@end

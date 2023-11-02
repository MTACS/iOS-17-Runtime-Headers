
@interface SKCropNode : SKNode {
    SKNode * _mask;
    void * _skcCropNode;
}

@property (nonatomic) bool invertMask;
@property (nonatomic, retain) SKNode *maskNode;
@property (nonatomic) bool prefersAlphaMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)invertMask;
- (bool)isEqualToNode:(id)arg1;
- (id)maskNode;
- (bool)prefersAlphaMask;
- (void)setInvertMask:(bool)arg1;
- (void)setMaskNode:(id)arg1;
- (void)setPrefersAlphaMask:(bool)arg1;
- (void)useAlphaMask:(bool)arg1;

@end

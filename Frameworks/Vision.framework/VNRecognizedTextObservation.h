
@interface VNRecognizedTextObservation : VNRectangleObservation {
    bool  _isTitle;
    NSString * _text;
    NSArray * _textObjects;
}

@property (nonatomic) bool isTitle;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, copy) NSArray *textObjects;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTitle;
- (void)setIsTitle:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextObjects:(id)arg1;
- (id)text;
- (id)textObjects;
- (id)topCandidates:(unsigned long long)arg1;
- (id)vn_cloneObject;

@end

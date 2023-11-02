
@interface VNRecognizedTextBlock : VNRecognizedText {
    NSAttributedString * _attributedString;
    NSArray * _baselines;
    CROutputRegion * _crOutputRegion;
    unsigned long long  _requestRevision;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedString;
@property (nonatomic, readonly, copy) NSArray *baselines;
@property (getter=getRecognizedLanguages, nonatomic, readonly) NSArray *recognizedLanguages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)baselines;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getCROutputRegion;
- (id)getRecognizedLanguages;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 crOutputRegion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requestRevision;
- (id)string;

@end

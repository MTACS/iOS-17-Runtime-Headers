
@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    CRImageReaderOutput * _crOutput;
    unsigned long long  _requestRevision;
}

@property (nonatomic, readonly) float confidence;
@property (readonly, copy) CRImageReaderOutput *crOutput;
@property (nonatomic) unsigned long long requestRevision;
@property (nonatomic, readonly, copy) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crOutput;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 CRImageReaderOutput:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requestRevision;
- (void)setRequestRevision:(unsigned long long)arg1;
- (id)string;

@end


@interface ARAppClipCodeResult : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _codeToWorldVisionTransform;
    float  _confidence;
    bool  _isScaleReliable;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
    long long  _urlDecodingStateInternal;
    unsigned long long  _urlEncodingVersion;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } codeToWorldVisionTransform;
@property (nonatomic) float confidence;
@property (nonatomic) bool isScaleReliable;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) long long urlDecodingStateInternal;
@property (nonatomic) unsigned long long urlEncodingVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })codeToWorldVisionTransform;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isScaleReliable;
- (void)setCodeToWorldVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setIsScaleReliable:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlDecodingStateInternal:(long long)arg1;
- (void)setUrlEncodingVersion:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;
- (long long)urlDecodingStateInternal;
- (unsigned long long)urlEncodingVersion;

@end

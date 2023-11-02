
@interface PXGShaderSource : NSObject <NSCopying> {
    bool  _isOpaque;
    NSString * _otherSource;
    NSString * _source;
    NSDictionary * _sourceByShaderFunction;
}

@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) NSString *otherSource;
@property (nonatomic, readonly) NSString *source;

- (void).cxx_destruct;
- (void)_parseShader;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (long long)length;
- (id)otherSource;
- (id)source;
- (id)sourceForShaderFunction:(id)arg1;

@end


@interface DIResizeParams : DIBaseParams {
    unsigned long long  _size;
}

@property unsigned long long size;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExistingParams:(id)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (bool)resizeWithError:(id*)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end

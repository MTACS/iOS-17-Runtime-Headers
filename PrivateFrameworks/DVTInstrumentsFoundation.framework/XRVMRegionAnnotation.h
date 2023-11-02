
@interface XRVMRegionAnnotation : NSObject <NSSecureCoding> {
    unsigned long long  _baseAddress;
    int * _pageMap;
    unsigned long long  _pageSize;
    unsigned int  _vpages;
}

@property (nonatomic) unsigned long long pageSize;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (int)dispositionForPage:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initSamplingRegion:(id)arg1 inTask:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)pageSize;
- (void)setPageSize:(unsigned long long)arg1;

@end

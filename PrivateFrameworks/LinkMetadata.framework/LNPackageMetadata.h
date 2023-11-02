
@interface LNPackageMetadata : NSObject <NSSecureCoding> {
    NSArray * _includes;
}

@property (nonatomic, readonly, copy) NSArray *includes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMetadataFileURL:(id)arg1 bundleURL:(id)arg2 error:(id*)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)includes;
- (id)initFrom:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncludes:(id)arg1;
- (id)initWithMetadataFileURL:(id)arg1 bundleURL:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)linkerSymbolNames;
- (id)resolveWithBundle:(id)arg1 error:(id*)arg2;
- (bool)resolveWithImagePath:(id)arg1 executablePath:(id)arg2 rpaths:(id)arg3 partialResults:(id)arg4 error:(id*)arg5;
- (id)verboseDescription;

@end

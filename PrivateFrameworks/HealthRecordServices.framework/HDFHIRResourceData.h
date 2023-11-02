
@interface HDFHIRResourceData : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRVersion * _FHIRVersion;
    NSData * _data;
    NSURL * _sourceURL;
}

@property (nonatomic, copy) HKFHIRVersion *FHIRVersion;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)JSONDictionaryWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFHIRVersion:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end

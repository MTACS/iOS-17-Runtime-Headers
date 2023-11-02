
@interface WFFinderImageResizeDescriptor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _format;
    bool  _preserveMetadata;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long format;
@property (nonatomic, readonly) bool preserveMetadata;
@property (nonatomic, readonly) unsigned long long size;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)format;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 preserveMetadata:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)preserveMetadata;
- (unsigned long long)size;

@end

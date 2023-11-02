
@interface VNEntityIdentificationModelWriteOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _readOnly;
    unsigned long long  _version;
}

@property bool readOnly;
@property unsigned long long version;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readOnly;
- (void)setReadOnly:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end

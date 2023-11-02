
@interface VNEntityIdentificationModelInformation : NSObject <NSCopying, NSSecureCoding> {
    VNEntityIdentificationModelAlgorithm * _algorithm;
    NSDate * _lastModificationDate;
    bool  _readOnly;
    unsigned long long  _version;
}

@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) NSDate *lastModificationDate;
@property (getter=isReadOnly, readonly) bool readOnly;
@property (readonly) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 algorithm:(id)arg2 lastModificationDate:(id)arg3 readOnly:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (id)lastModificationDate;
- (unsigned long long)version;

@end


@interface VNPersonsModelInformation : NSObject <NSCopying, NSSecureCoding> {
    VNPersonsModelAlgorithm * _algorithm;
    NSDate * _lastModificationDate;
    bool  _readOnly;
    unsigned long long  _version;
}

@property (nonatomic, readonly, copy) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic, readonly, copy) NSDate *lastModificationDate;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2 algorithm:(id)arg3 readOnly:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (id)lastModificationDate;
- (unsigned long long)version;

@end


@interface GCGenericDeviceElementModel : NSObject <NSCopying, NSSecureCoding> {
    long long  _calibrationMax;
    long long  _calibrationMin;
    unsigned int  _elementCookie;
    NSString * _identifier;
    NSPredicate * _predicate;
    int  _typeOverride;
}

@property (readonly) long long calibrationMax;
@property (readonly) long long calibrationMin;
@property unsigned int elementCookie;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly) int typeOverride;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)calibrationMax;
- (long long)calibrationMin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned int)elementCookie;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)redactedDescription;
- (void)setElementCookie:(unsigned int)arg1;
- (int)typeOverride;

@end

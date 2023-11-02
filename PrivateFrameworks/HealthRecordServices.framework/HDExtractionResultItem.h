
@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _flags;
    HDOriginalFHIRResourceObject * _originalFHIRResource;
    NSArray * _units;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly, copy) HDOriginalFHIRResourceObject *originalFHIRResource;
@property (nonatomic, readonly, copy) NSArray *units;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalFHIRResource:(id)arg1 units:(id)arg2 flags:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)originalFHIRResource;
- (id)units;

@end

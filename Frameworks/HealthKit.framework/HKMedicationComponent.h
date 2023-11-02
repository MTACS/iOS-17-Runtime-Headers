
@interface HKMedicationComponent : NSObject <NSCopying, NSSecureCoding> {
    long long  _componentForm;
    NSSet * _ingredients;
}

@property (nonatomic, readonly) long long componentForm;
@property (nonatomic, readonly, copy) NSSet *ingredients;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)componentForm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)ingredients;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentForm:(long long)arg1 ingredients:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

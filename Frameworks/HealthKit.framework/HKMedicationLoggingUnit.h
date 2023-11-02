
@interface HKMedicationLoggingUnit : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fallbackLoggingUnitPluralString;
    NSString * _fallbackLoggingUnitSingularString;
    unsigned long long  _loggingUnitCode;
}

@property (nonatomic, readonly, copy) NSString *fallbackLoggingUnitPluralString;
@property (nonatomic, readonly, copy) NSString *fallbackLoggingUnitSingularString;
@property (nonatomic, readonly) unsigned long long loggingUnitCode;

+ (id)loggingUnitByResolvingSingularLoggingUnitString:(id)arg1 fallbackPluralLoggingUnitString:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyByOverridingFallbackLoggingUnitSingularString:(id)arg1 fallbackLoggingUnitPluralString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackLoggingUnitPluralString;
- (id)fallbackLoggingUnitSingularString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoggingUnitCode:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loggingUnitCode;

@end

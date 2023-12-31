
@interface DKDiagnosticParameters : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _parameters;
    NSDictionary * _predicates;
    NSDictionary * _specifications;
}

@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) NSDictionary *predicates;
@property (nonatomic, readonly) NSDictionary *specifications;

+ (id)diagnosticParametersWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_decoderClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)parameters;
- (id)predicates;
- (id)specifications;

@end

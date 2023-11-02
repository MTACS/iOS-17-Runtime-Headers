
@interface AAInheritance : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _benefactors;
    NSArray * _beneficiaries;
}

@property (nonatomic, readonly) NSArray *benefactors;
@property (nonatomic, readonly) NSArray *beneficiaries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)benefactors;
- (id)beneficiaries;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


@interface _EAEmailAddress : NSObject <NSSecureCoding> {
    NSString * _emailAddress;
}

@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly, copy) NSString *rawAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rawAddress;

@end

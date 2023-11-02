
@interface CKContextFingerprint : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic) long long type;

+ (id)parse:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end

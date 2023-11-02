
@interface CPEntity : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
}

@property (nonatomic, readonly) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)objectForIdentifier:(id)arg1;

@end

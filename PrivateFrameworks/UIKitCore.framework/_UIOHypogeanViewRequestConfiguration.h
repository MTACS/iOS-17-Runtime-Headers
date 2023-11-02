
@interface _UIOHypogeanViewRequestConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

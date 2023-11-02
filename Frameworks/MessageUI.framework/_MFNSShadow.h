
@interface _MFNSShadow : NSObject <NSSecureCoding> {
    NSShadow * _shadow;
}

@property (nonatomic, retain) NSShadow *shadow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (void)setShadow:(id)arg1;
- (id)shadow;

@end

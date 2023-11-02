
@interface CRSIconLayoutPage : NSObject <NSSecureCoding> {
    NSArray * _icons;
}

@property (nonatomic, readonly) NSArray *icons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icons;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcons:(id)arg1;

@end

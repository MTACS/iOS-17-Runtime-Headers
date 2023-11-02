
@interface WFListDisplayConfiguration : NSObject <NSSecureCoding> {
    NSNumber * _titleLineLimit;
}

@property (nonatomic, retain) NSNumber *titleLineLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTitleLineLimit:(id)arg1;
- (id)titleLineLimit;

@end

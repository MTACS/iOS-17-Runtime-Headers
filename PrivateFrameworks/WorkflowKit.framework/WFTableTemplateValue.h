
@interface WFTableTemplateValue : NSObject <NSSecureCoding> {
    long long  _compoundType;
    NSArray * _rows;
}

@property (nonatomic, readonly) long long compoundType;
@property (nonatomic, readonly, copy) NSArray *rows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compoundType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2;
- (id)rows;

@end

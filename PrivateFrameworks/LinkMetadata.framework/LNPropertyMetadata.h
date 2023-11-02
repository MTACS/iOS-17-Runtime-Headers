
@interface LNPropertyMetadata : NSObject <NSSecureCoding> {
    NSString * _identifier;
    LNStaticDeferredLocalizedString * _title;
    LNValueType * _valueType;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) LNValueType *valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 valueType:(id)arg2 title:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)title;
- (id)valueType;

@end

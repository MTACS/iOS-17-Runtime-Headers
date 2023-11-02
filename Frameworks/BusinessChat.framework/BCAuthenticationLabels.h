
@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString * _action;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 action:(id)arg3;
- (id)subtitle;
- (id)title;

@end

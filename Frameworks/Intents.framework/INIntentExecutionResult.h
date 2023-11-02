
@interface INIntentExecutionResult : NSObject <NSSecureCoding> {
    INIntent * _intent;
    INIntentResponse * _intentResponse;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentResponse *intentResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (id)intent;
- (id)intentResponse;
- (bool)isEqual:(id)arg1;

@end

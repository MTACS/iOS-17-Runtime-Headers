
@interface SXScrollPosition : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *jsonRepresentation;

+ (bool)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 exactly:(bool)arg2;
- (id)initWithJSONRepresentation:(id)arg1;
- (id)jsonRepresentation;

@end

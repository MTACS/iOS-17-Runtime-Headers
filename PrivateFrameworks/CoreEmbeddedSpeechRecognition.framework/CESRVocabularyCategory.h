
@interface CESRVocabularyCategory : NSObject <NSCopying, NSSecureCoding> {
    NSString * _tagName;
    NSString * _templateName;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *tagName;
@property (nonatomic, readonly, copy) NSString *templateName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateName:(id)arg1 tagName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)tagName;
- (id)templateName;

@end

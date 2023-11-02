
@interface _SFContextualNamedEntityCodingObject : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _category;
    NSString * _content;
    NSString * _language;
    NSNumber * _score;
    long long  _sourceFramework;
}

@property (nonatomic, readonly, copy) NSNumber *category;
@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSNumber *score;
@property (nonatomic, readonly) long long sourceFramework;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 sourceFramework:(long long)arg2 score:(id)arg3 category:(id)arg4 language:(id)arg5;
- (id)language;
- (id)score;
- (long long)sourceFramework;

@end

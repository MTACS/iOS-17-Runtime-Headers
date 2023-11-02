
@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding> {
    INPerson * _person;
    long long  _recommendation;
    NSNumber * _score;
}

@property (nonatomic, readonly, copy) INPerson *person;
@property (nonatomic, readonly) long long recommendation;
@property (nonatomic, readonly, copy) NSNumber *score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerson:(id)arg1 recommendation:(long long)arg2;
- (id)initWithPerson:(id)arg1 score:(id)arg2;
- (id)initWithPerson:(id)arg1 score:(id)arg2 recommendation:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)person;
- (long long)recommendation;
- (id)score;

@end


@protocol PKPayLaterFundingSourceDetails <NSObject, NSSecureCoding, NSCopying>

@required

- (NSDictionary *)dictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1 type:(unsigned long long)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

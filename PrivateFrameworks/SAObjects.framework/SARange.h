
@interface SARange : SADomainObject

@property (nonatomic) long long length;
@property (nonatomic) long long start;

+ (id)range;
+ (id)rangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)length;
- (void)setLength:(long long)arg1;
- (void)setStart:(long long)arg1;
- (long long)start;

@end

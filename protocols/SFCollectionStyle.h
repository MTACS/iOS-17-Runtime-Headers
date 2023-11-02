
@protocol SFCollectionStyle <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (unsigned long long)initiallyVisibleCardSectionCount;
- (NSData *)jsonData;
- (void)setInitiallyVisibleCardSectionCount:(unsigned long long)arg1;

@end


@protocol SFClearProactiveCategoryCommand <SFCommand>

@required

- (int)category;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)proactiveIdentifier;
- (void)setCategory:(int)arg1;
- (void)setProactiveIdentifier:(NSString *)arg1;
- (void)setShouldClearWholeSection:(bool)arg1;
- (bool)shouldClearWholeSection;

@end

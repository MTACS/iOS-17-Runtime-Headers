
@protocol _SFPBClearProactiveCategoryCommand <NSObject>

@required

- (int)category;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)proactiveIdentifier;
- (void)setCategory:(int)arg1;
- (void)setProactiveIdentifier:(NSString *)arg1;
- (void)setShouldClearWholeSection:(bool)arg1;
- (bool)shouldClearWholeSection;

@end

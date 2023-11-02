
@interface SAUSTitleCardSection : SAUSCardSection

@property (nonatomic, copy) NSString *title;

+ (id)titleCardSection;
+ (id)titleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;

@end

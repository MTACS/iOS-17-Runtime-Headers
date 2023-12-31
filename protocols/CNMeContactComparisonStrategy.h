
@protocol CNMeContactComparisonStrategy <NSObject>

@required

- (bool)isMeContact:(CNContact *)arg1;
- (void)meContactChangedInStore:(CNContactStore *)arg1;
- (NSArray *)meContactIdentifiers;

@end

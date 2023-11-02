
@protocol CNPropertyGroupItemDelegate <NSObject>

@optional

- (CNContactViewCache *)contactViewCache;
- (CNUIGeminiDataSource *)geminiDataSource;
- (void)propertyItem:(CNPropertyGroupItem *)arg1 willChangeValue:(id)arg2;
- (bool)propertyItemCanIgnoreGuardianRestrictions;

@end

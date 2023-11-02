
@protocol NTKComplicationItem <NSObject>

@required

- (NSString *)ntk_contactIdentifier;
- (NSString *)ntk_identifier;
- (unsigned long long)ntk_itemType;
- (NSString *)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (NSString *)ntk_sectionIdentifier;

@end

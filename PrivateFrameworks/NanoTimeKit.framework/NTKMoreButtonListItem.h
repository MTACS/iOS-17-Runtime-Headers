
@interface NTKMoreButtonListItem : NSObject <NTKComplicationItem> {
    NSString * _ntk_identifier;
    NSString * _ntk_sectionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ntk_contactIdentifier;
@property (nonatomic, readonly) NSString *ntk_identifier;
@property (nonatomic, readonly) unsigned long long ntk_itemType;
@property (nonatomic, readonly) NSString *ntk_sectionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)arg1;
- (id)ntk_contactIdentifier;
- (id)ntk_identifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (id)ntk_sectionIdentifier;

@end

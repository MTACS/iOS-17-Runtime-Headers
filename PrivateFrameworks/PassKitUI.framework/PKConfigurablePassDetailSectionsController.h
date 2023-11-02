
@interface PKConfigurablePassDetailSectionsController : NSObject <PKTableViewSectionController> {
    <PKConfigurablePassDetailSectionsControllerDelegate> * _delegate;
    NSDictionary * _fieldMap;
    NSArray * _sectionIdentifiers;
    NSDictionary * _sectionMap;
    bool  _useBridgeStyle;
}

@property (nonatomic, readonly) NSArray *activePassDetailSections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKConfigurablePassDetailSectionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool useBridgeStyle;

- (void).cxx_destruct;
- (id)_initWithPaymentPass:(id)arg1 visibleSectionIdentifiers:(id)arg2 renderUnclaimedFields:(bool)arg3;
- (id)activePassDetailSections;
- (id)delegate;
- (bool)hasArbitraryInfoField:(id)arg1;
- (id)init;
- (id)initWithPaymentPass:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 forSelectSections:(id)arg2;
- (id)sectionIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)setSectionIdentifiers:(id)arg1;
- (void)setUseBridgeStyle:(bool)arg1;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;
- (bool)useBridgeStyle;

@end

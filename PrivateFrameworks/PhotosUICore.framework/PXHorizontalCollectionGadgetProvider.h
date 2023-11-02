
@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate> {
    NSDictionary * _columnSpanForTraitCollection;
    PXGadgetProvider * _contentGadgetProvider;
    long long  _defaultColumnSpan;
    unsigned long long  _gadgetType;
    bool  _hasLoaded;
    unsigned long long  _headerStyle;
    Class  _horizontalCollectionGadgetClass;
    PXHorizontalCollectionGadget * _horizontalGadget;
    bool  _isFixedHeight;
    bool  _prefersPagingEnabled;
    NSString * _title;
}

@property (nonatomic, copy) NSDictionary *columnSpanForTraitCollection;
@property (nonatomic, readonly) PXGadgetProvider *contentGadgetProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultColumnSpan;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) bool isFixedHeight;
@property (nonatomic) bool prefersPagingEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)_createHorizontalGadget;
- (void)_updateHorizontalGadget;
- (id)columnSpanForTraitCollection;
- (id)contentGadgetProvider;
- (long long)defaultColumnSpan;
- (unsigned long long)estimatedNumberOfGadgets;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (unsigned long long)headerStyle;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;
- (id)init;
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2;
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentGadgetProvider:(id)arg2 title:(id)arg3 horizontalCollectionGadgetClass:(Class)arg4;
- (void)invalidateGadgets;
- (bool)isFixedHeight;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (bool)prefersPagingEnabled;
- (void)resetPriorityDate;
- (void)setColumnSpanForTraitCollection:(id)arg1;
- (void)setDefaultColumnSpan:(long long)arg1;
- (void)setGadgetType:(unsigned long long)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setIsFixedHeight:(bool)arg1;
- (void)setPrefersPagingEnabled:(bool)arg1;
- (id)title;

@end

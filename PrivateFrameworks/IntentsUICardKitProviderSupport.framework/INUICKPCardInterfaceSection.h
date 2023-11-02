
@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling> {
    <CRCardSection> * _cardSection;
    NSSet * _cardSectionParameters;
}

@property (nonatomic, retain) <CRCardSection> *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (nonatomic, readonly) bool isWildCardSection;
@property (nonatomic, copy) NSSet *parameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (unsigned long long)hash;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isWildCardSection;
- (id)parameters;
- (void)setCardSection:(id)arg1;
- (void)setParameters:(id)arg1;

@end

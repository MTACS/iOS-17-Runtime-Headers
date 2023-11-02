
@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {
    <CRKCardSectionViewProviding> * _realCardSectionViewProvider;
    <CRCard> * card;
    NSString * providerIdentifier;
    NSArray * viewConfigurations;
}

@property (nonatomic, readonly) <CRCard> *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, retain) <CRKCardSectionViewProviding> *realCardSectionViewProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *viewConfigurations;

- (void).cxx_destruct;
- (id)card;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (id)providerIdentifier;
- (id)realCardSectionViewProvider;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setRealCardSectionViewProvider:(id)arg1;
- (bool)vetoDisplayOfCardSection:(id)arg1;
- (id)viewConfigurations;

@end

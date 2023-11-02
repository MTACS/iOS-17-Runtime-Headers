
@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {
    <CRCard> * _card;
    NSArray * _viewConfigurations;
}

@property (nonatomic, readonly) <CRCard> *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *viewConfigurations;

- (void).cxx_destruct;
- (id)card;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (id)initWithCard:(id)arg1;
- (bool)isShortcutCard:(id)arg1;
- (id)providerIdentifier;
- (id)viewConfigurations;

@end

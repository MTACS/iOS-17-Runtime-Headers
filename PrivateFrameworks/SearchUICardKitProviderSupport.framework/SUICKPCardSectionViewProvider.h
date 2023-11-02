
@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {
    <CRCard> * _card;
    <CRKCardSectionViewProviderDelegate> * _delegate;
    SUICKPFeedbackDelegateDemultiplexer * _feedbackDelegateDemux;
    NSArray * _viewConfigurations;
}

@property (nonatomic, readonly) <CRCard> *card;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCardSectionViewProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *viewConfigurations;

- (void).cxx_destruct;
- (id)card;
- (id)delegate;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (id)initWithCard:(id)arg1;
- (id)providerIdentifier;
- (void)setDelegate:(id)arg1;
- (id)viewConfigurations;

@end


@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback> {
    <CRCardSection> * _cardSection;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic, retain) <CRCardSection> *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (void)setCardSection:(id)arg1;

@end

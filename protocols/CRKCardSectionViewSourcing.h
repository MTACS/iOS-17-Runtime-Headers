
@protocol CRKCardSectionViewSourcing <NSObject>

@required

- (bool)cardSectionShouldBeDisplayed:(id <CRCardSection>)arg1;
- (CRKCardSectionViewConfiguration *)viewConfigurationForCardSection:(id <CRCardSection>)arg1;

@end

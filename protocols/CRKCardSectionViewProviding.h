
@protocol CRKCardSectionViewProviding <NSObject>

@required

- (<CRCard> *)card;
- (NSArray *)viewConfigurations;

@optional

- (unsigned long long)displayPriorityForCardSection:(id <CRCardSection>)arg1;
- (bool)vetoDisplayOfCardSection:(id <CRCardSection>)arg1;

@end

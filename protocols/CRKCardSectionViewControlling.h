
@protocol CRKCardSectionViewControlling <CRKEventResponding>

@required

- (<CRKCardSectionViewControllingDelegate> *)cardSectionViewControllingDelegate;
- (void)setCardSectionViewControllingDelegate:(id <CRKCardSectionViewControllingDelegate>)arg1;

@optional

- (void)desiresInteractivity:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end


@protocol CRKCardSectionViewControllingDelegate <NSObject>

@required

- (bool)performCommand:(id <CRCommand>)arg1 forViewController:(UIViewController<CRKCardSectionViewControlling> *)arg2;

@end

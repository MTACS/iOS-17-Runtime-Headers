
@protocol ICDocCamFilterViewDelegate <NSObject>

@required

- (bool)filterViewControllerApplyToAll:(short)arg1;
- (bool)filterViewControllerCanApplyToAll:(short)arg1;
- (bool)filterViewControllerDidSelectFilter:(short)arg1;

@end

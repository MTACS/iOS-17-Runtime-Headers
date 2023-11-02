
@protocol DBSDisplayZoomTableViewCellDelegate <NSObject>

@required

- (void)displayZoomTableViewCell:(DBSDisplayZoomTableViewCell *)arg1 userDidTapOnDisplayZoomOption:(unsigned long long)arg2;
- (unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(DBSDisplayZoomTableViewCell *)arg1;
- (NSArray *)supportedDisplayZoomOptions;

@end

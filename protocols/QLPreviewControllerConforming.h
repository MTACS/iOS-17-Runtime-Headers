
@protocol QLPreviewControllerConforming <NSObject>

@required

+ (bool)canPreviewItem:(id <QLPreviewItem>)arg1;

- (<QLPreviewItem> *)currentPreviewItem;
- (long long)currentPreviewItemIndex;
- (<QLPreviewControllerConformingDataSource> *)dataSource;
- (<QLPreviewControllerConformingDelegate> *)delegate;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (void)setDataSource:(id <QLPreviewControllerConformingDataSource>)arg1;
- (void)setDelegate:(id <QLPreviewControllerConformingDelegate>)arg1;

@end


@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming> {
    long long  currentPreviewItemIndex;
    <QLPreviewControllerConformingDataSource> * dataSource;
    <QLPreviewControllerConformingDelegate> * delegate;
}

@property (readonly) <QLPreviewItem> *currentPreviewItem;
@property long long currentPreviewItemIndex;
@property (nonatomic) <QLPreviewControllerConformingDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLPreviewControllerConformingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPreviewItem:(id)arg1;
+ (id)requestPreviewMockSceneActivation;

- (void).cxx_destruct;
- (id)currentPreviewItem;
- (long long)currentPreviewItemIndex;
- (id)dataSource;
- (id)delegate;
- (void)dismissPreview;
- (id)init;
- (void)presentPreview;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end


@interface VUIShareActivityViewController_iOS : UIActivityViewController {
    NSURL * _itemImageURL;
    NSString * _itemSubtitle;
    NSString * _itemTitle;
    LPMetadataProvider * _pendingMessageMetadataProvider;
    NSURL * _sharingURL;
}

@property (nonatomic, retain) NSURL *itemImageURL;
@property (nonatomic, retain) NSString *itemSubtitle;
@property (nonatomic, retain) NSString *itemTitle;

+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 completionHandler:(id /* block */)arg7;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceView:(id)arg6 completionHandler:(id /* block */)arg7;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 groupActivityMetadata:(id)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 completionHandler:(id /* block */)arg8;
+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sharedWatchId:(id)arg5 sharedWatchUrl:(id)arg6 sourceView:(id)arg7 completionHandler:(id /* block */)arg8;
+ (void)shareMediaWithShareSheet:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)itemImageURL;
- (id)itemSubtitle;
- (id)itemTitle;
- (void)setItemImageURL:(id)arg1;
- (void)setItemSubtitle:(id)arg1;
- (void)setItemTitle:(id)arg1;

@end

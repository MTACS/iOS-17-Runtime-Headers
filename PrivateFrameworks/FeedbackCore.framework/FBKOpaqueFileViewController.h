
@interface FBKOpaqueFileViewController : UIViewController {
    UILabel * _debugLabel;
    UILabel * _fileNameLabel;
    UILabel * _fileSizeLabel;
    UIImageView * _icon;
    DEDAttachmentItem * _item;
}

@property (nonatomic) UILabel *debugLabel;
@property (nonatomic) UILabel *fileNameLabel;
@property (nonatomic) UILabel *fileSizeLabel;
@property (nonatomic) UIImageView *icon;
@property (nonatomic, retain) DEDAttachmentItem *item;

+ (bool)shouldDisplayItem:(id)arg1;

- (void).cxx_destruct;
- (id)debugLabel;
- (void)didTapView;
- (id)fileNameLabel;
- (id)fileSizeLabel;
- (id)icon;
- (id)item;
- (void)setDebugLabel:(id)arg1;
- (void)setFileNameLabel:(id)arg1;
- (void)setFileSizeLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setItem:(id)arg1;
- (void)showShareSheet;
- (bool)showsItem;
- (void)viewDidLoad;

@end

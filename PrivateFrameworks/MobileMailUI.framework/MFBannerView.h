
@interface MFBannerView : MFMessageHeaderViewBlock {
    UILabel * _bannerLabel;
    UILabel * _dateLabel;
    <MFBannerViewDelegate> * _delegate;
    UIButton * _editButton;
    UIImageView * _imageView;
    <EMCollectionItemID> * _itemID;
    long long  _type;
}

@property (nonatomic, readonly) UILabel *bannerLabel;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic) <MFBannerViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *editButton;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) <EMCollectionItemID> *itemID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_editButtonConfiguration;
- (id)bannerLabel;
- (id)dateLabel;
- (id)delegate;
- (void)displayMessageUsingViewModel:(id)arg1;
- (id)editButton;
- (id)imageView;
- (id)initWithType:(long long)arg1 itemID:(id)arg2 delegate:(id)arg3;
- (id)itemID;
- (void)setDelegate:(id)arg1;
- (void)setItemID:(id)arg1;
- (long long)type;

@end

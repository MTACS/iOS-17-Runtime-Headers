
@interface PUPhotoStreamAlbumTableViewCell : UITableViewCell

@property (nonatomic, retain) NSString *detailText;
@property (nonatomic, retain) NSString *text;

+ (double)cellHeight;
+ (double)labelHorizontalInset;
+ (double)labelXOriginForContentWidth:(double)arg1 labelWidth:(double)arg2 isRTL:(bool)arg3;

- (id)detailText;
- (void)layoutSubviews;
- (void)setDetailText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

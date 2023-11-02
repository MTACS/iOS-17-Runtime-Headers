
@interface NTKAlbumEmptyView : UIView {
    UILabel * _bodyLabel;
    NSString * _bodyLabelText;
    CLKDevice * _device;
    UILabel * _headerLabel;
    NSString * _headerLabelText;
    UIImageView * _iconImageView;
}

@property (nonatomic, retain) NSString *bodyLabelText;
@property (nonatomic, retain) NSString *headerLabelText;

- (void).cxx_destruct;
- (id)bodyLabelText;
- (id)headerLabelText;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)setBodyLabelText:(id)arg1;
- (void)setHeaderLabelText:(id)arg1;

@end

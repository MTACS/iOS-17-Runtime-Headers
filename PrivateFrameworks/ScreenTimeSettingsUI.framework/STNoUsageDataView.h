
@interface STNoUsageDataView : UIView {
    bool  _localDevice;
    UILabel * _noDataDetailTextLabel;
}

@property (getter=isLocalDevice, nonatomic) bool localDevice;
@property (nonatomic, readonly) UILabel *noDataDetailTextLabel;

- (void).cxx_destruct;
- (id)initWithPreferredFontTextStyle:(id)arg1;
- (bool)isLocalDevice;
- (id)noDataDetailTextLabel;
- (void)setLocalDevice:(bool)arg1;

@end

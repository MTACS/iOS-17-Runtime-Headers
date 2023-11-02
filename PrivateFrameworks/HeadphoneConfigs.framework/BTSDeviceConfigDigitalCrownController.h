
@interface BTSDeviceConfigDigitalCrownController : PSListItemsController {
    UIImage * _rotationImage;
    UIImageView * _rotationImageView;
}

- (void).cxx_destruct;
- (id)getRotationImageFileName:(long long)arg1;
- (void)listItemSelected:(id)arg1;
- (void)setupTableViewHeader;
- (void)updateRotateImage:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;

@end


@interface MPVolumeViewController : UIViewController {
    MPVolumeView * _volumeView;
}

@property (nonatomic, readonly) MPVolumeView *volumeView;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)viewDidLoad;
- (id)volumeView;

@end

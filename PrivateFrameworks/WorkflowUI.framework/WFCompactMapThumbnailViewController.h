
@interface WFCompactMapThumbnailViewController : WFCompactThumbnailViewController {
    CLPlacemark * _placemark;
}

@property (nonatomic, readonly) CLPlacemark *placemark;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (id)initWithCLPlacemark:(id)arg1;
- (void)loadView;
- (id)placemark;

@end

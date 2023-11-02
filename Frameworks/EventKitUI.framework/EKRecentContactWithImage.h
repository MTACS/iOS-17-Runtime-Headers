
@interface EKRecentContactWithImage : NSObject {
    UIImage * _image;
    CRRecentContact * _recent;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) CRRecentContact *recent;

- (void).cxx_destruct;
- (id)image;
- (id)recent;
- (void)setImage:(id)arg1;
- (void)setRecent:(id)arg1;

@end

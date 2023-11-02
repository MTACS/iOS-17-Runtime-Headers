
@interface BPSExpressSetupDetailItem : NSObject {
    NSString * _detail;
    UIImage * _image;
    NSString * _status;
    NSString * _title;
}

@property (nonatomic, retain) NSString *detail;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)detail;
- (id)image;
- (void)setDetail:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)status;
- (id)title;

@end

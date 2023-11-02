
@interface PXDebug : UIImageView {
    struct CGColor { } * _backgroundColor;
    NSString * _name;
    struct CGImage { } * _previewImage;
}

@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct CGImage { }*previewImage;

- (void).cxx_destruct;
- (id)__dbg_formattedDisplayName;
- (id)__dbg_snapshotImage;
- (struct CGColor { }*)backgroundColor;
- (id)description;
- (id)layer;
- (id)name;
- (struct CGImage { }*)previewImage;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewImage:(struct CGImage { }*)arg1;

@end

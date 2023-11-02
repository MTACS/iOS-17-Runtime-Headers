
@interface SFWebExtensionButton : NSObject {
    bool  _badged;
    WBSWebExtensionData * _extension;
    UIImage * _image;
}

@property (nonatomic, readonly) bool badged;
@property (nonatomic, readonly) WBSWebExtensionData *extension;
@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (bool)badged;
- (id)extension;
- (id)image;
- (id)initWithExtension:(id)arg1 image:(id)arg2 badged:(bool)arg3;

@end

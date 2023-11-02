
@interface CPUITableCellAccessory : NSObject {
    UIImage * _image;
}

@property (nonatomic, retain) UIImage *image;

+ (id)accessoryWithActivityIndicator;
+ (id)accessoryWithCloudIcon;
+ (id)accessoryWithDisclosureIndicator;
+ (id)accessoryWithImage:(id)arg1;
+ (id)accessoryWithiCloudIcon;

- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg1;

@end

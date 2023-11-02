
@interface WFContextualActionIcon : NSObject <NSSecureCoding> {
    NSString * _applicationBundleIdentifier;
    unsigned long long  _displayStyle;
    NSData * _imageData;
    NSString * _imageName;
    double  _imageScale;
    NSURL * _imageURL;
    NSString * _systemName;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) double imageScale;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) WFIcon *wfIcon;

+ (id)iconWithApplicationBundleIdentifier:(id)arg1;
+ (id)iconWithImageData:(id)arg1 scale:(double)arg2 displayStyle:(unsigned long long)arg3;
+ (id)iconWithImageName:(id)arg1;
+ (id)iconWithImageURL:(id)arg1 displayStyle:(unsigned long long)arg2;
+ (id)iconWithSystemName:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageName;
- (double)imageScale;
- (id)imageURL;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 scale:(double)arg2 displayStyle:(unsigned long long)arg3;
- (id)initWithImageName:(id)arg1;
- (id)initWithImageURL:(id)arg1 displayStyle:(unsigned long long)arg2;
- (id)initWithSystemName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)renderedImage;
- (id)systemName;
- (id)wfIcon;

@end

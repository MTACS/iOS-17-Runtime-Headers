
@interface MTRContentLauncherClusterStyleInformationStruct : NSObject <NSCopying> {
    NSString * _color;
    NSString * _imageURL;
    MTRContentLauncherClusterDimensionStruct * _size;
}

@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *imageURL;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) MTRContentLauncherClusterDimensionStruct *size;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)imageURL;
- (id)imageUrl;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end

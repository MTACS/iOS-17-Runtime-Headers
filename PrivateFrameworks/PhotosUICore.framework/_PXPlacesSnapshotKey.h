
@interface _PXPlacesSnapshotKey : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  __imageSize;
    long long  __userInterfaceStyle;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _imageSize;
@property (nonatomic, readonly) long long _userInterfaceStyle;

- (struct CGSize { double x1; double x2; })_imageSize;
- (long long)_userInterfaceStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1 userInterfaceStyle:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end

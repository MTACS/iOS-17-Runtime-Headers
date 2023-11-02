
@interface CNUserSetupPictureData : NSObject <NSCopying, NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSData * _imageData;
    NSData * _memojiMetadata;
    NSData * _thumbnailImageData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSData *memojiMetadata;
@property (nonatomic, retain) NSData *thumbnailImageData;

+ (id)log;
+ (bool)supportsSecureCoding;
+ (id)userSetupPictureDataFromData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 memojiMetadata:(id)arg4;
- (id)memojiMetadata;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageData:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)thumbnailImageData;

@end


@interface FCHeadlineThumbnailMetadata : NSObject {
    FCColor * _accentColor;
    FCColor * _backgroundColor;
    FCHeadlineThumbnailImageMetadata * _defaultQualityImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focalFrame;
    unsigned long long  _focalFrameBuffer;
    FCHeadlineThumbnailImageMetadata * _highQualityImage;
    FCHeadlineThumbnailImageMetadata * _lowQualityImage;
    FCHeadlineThumbnailImageMetadata * _mediumQualityImage;
    FCColor * _primaryColor;
    FCColor * _textColor;
    FCHeadlineThumbnailImageMetadata * _ultraQualityImage;
}

@property (nonatomic, readonly) FCColor *accentColor;
@property (nonatomic, readonly) FCColor *backgroundColor;
@property (nonatomic, readonly) FCHeadlineThumbnailImageMetadata *defaultQualityImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focalFrame;
@property (nonatomic) unsigned long long focalFrameBuffer;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) FCHeadlineThumbnailImageMetadata *highQualityImage;
@property (nonatomic, readonly) FCHeadlineThumbnailImageMetadata *lowQualityImage;
@property (nonatomic, readonly) FCHeadlineThumbnailImageMetadata *mediumQualityImage;
@property (nonatomic, readonly) FCColor *primaryColor;
@property (nonatomic, readonly) FCColor *textColor;
@property (nonatomic, readonly) FCHeadlineThumbnailImageMetadata *ultraQualityImage;

- (void).cxx_destruct;
- (id)accentColor;
- (id)backgroundColor;
- (id)defaultQualityImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focalFrame;
- (unsigned long long)focalFrameBuffer;
- (bool)hasThumbnail;
- (id)highQualityImage;
- (id)initWithTextColor:(id)arg1 backgroundColor:(id)arg2 accentColor:(id)arg3 primaryColor:(id)arg4 focalFrame:(unsigned long long)arg5 lowQualityImage:(id)arg6 defaultQualityImage:(id)arg7 mediumQualityImage:(id)arg8 highQualityImage:(id)arg9 ultraQualityImage:(id)arg10;
- (id)lowQualityImage;
- (id)mediumQualityImage;
- (id)primaryColor;
- (void)setFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFocalFrameBuffer:(unsigned long long)arg1;
- (id)textColor;
- (id)ultraQualityImage;

@end

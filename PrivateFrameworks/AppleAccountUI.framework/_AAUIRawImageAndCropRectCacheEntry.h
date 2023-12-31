
@interface _AAUIRawImageAndCropRectCacheEntry : NSObject {
    NSDate * _expirationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rawCropRect;
    UIImage * _rawImage;
    NSString * _serverCacheTag;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rawCropRect;
@property (nonatomic, readonly) UIImage *rawImage;
@property (nonatomic, readonly) NSString *serverCacheTag;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)entryWithRawImage:(id)arg1 rawCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 serverCacheTag:(id)arg3;

- (void).cxx_destruct;
- (id)expirationDate;
- (bool)isValid;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawCropRect;
- (id)rawImage;
- (id)serverCacheTag;

@end

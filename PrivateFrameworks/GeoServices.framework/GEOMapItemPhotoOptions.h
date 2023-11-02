
@interface GEOMapItemPhotoOptions : NSObject {
    bool  _allowSmaller;
    long long  _preferredCropStyle;
    long long  _preferredFormat;
}

@property (nonatomic, readonly) bool allowSmaller;
@property (nonatomic, readonly) long long preferredCropStyle;
@property (nonatomic, readonly) long long preferredFormat;

+ (id)defaultPhotoOptionsWithAllowSmaller:(bool)arg1;
+ (id)defaultPhotoOptionsWithCropStyle:(long long)arg1;

- (bool)allowSmaller;
- (id)initWithAllowSmaller:(bool)arg1 cropStyle:(long long)arg2 format:(long long)arg3;
- (long long)preferredCropStyle;
- (long long)preferredFormat;

@end

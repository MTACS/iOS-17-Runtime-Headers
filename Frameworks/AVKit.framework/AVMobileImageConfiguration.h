
@interface AVMobileImageConfiguration : NSObject {
    UIFont * _font;
    bool  _imageContainedInBundle;
    NSString * _string;
}

@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) bool imageContainedInBundle;
@property (nonatomic, readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)font;
- (unsigned long long)hash;
- (bool)imageContainedInBundle;
- (id)imageName;
- (id)initWithImageName:(id)arg1 font:(id)arg2 imageContainedInBundle:(bool)arg3;
- (id)initWithString:(id)arg1 font:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)string;

@end

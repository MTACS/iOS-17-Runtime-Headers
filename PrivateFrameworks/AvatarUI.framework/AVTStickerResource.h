
@interface AVTStickerResource : NSObject <AVTCachedResource, NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    UIImage * _image;
    AVTUINSURL * _internalURL;
    bool  _prereleaseSticker;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) AVTUINSURL *internalURL;
@property (getter=isPrereleaseSticker, nonatomic) bool prereleaseSticker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)internalURL;
- (bool)isPrereleaseSticker;
- (void)setInternalURL:(id)arg1;
- (void)setPrereleaseSticker:(bool)arg1;
- (void)setURL:(id)arg1;

@end


@interface _WKActivatedElementInfo : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _ID;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _URL;
    bool  _animatedImage;
    struct Vector<WebCore::ElementAnimationContext, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        struct ElementAnimationContext {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _animationsUnderElement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    bool  _canShowAnimationControls;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    }  _cocoaImage;
    struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { 
        struct ShareableBitmap {} *m_ptr; 
    }  _image;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _imageMIMEType;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _imageURL;
    struct IntPoint { 
        int m_x; 
        int m_y; 
    }  _interactionLocation;
    bool  _isAnimating;
    bool  _isImage;
    bool  _isUsingAlternateURLForImage;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _title;
    long long  _type;
    struct RetainPtr<NSDictionary> { 
        void *m_ptr; 
    }  _userInfo;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) const void*_animationsUnderElement;
@property (nonatomic, readonly) struct IntPoint { int x1; int x2; } _interactionLocation;
@property (nonatomic, readonly) bool _isImage;
@property (nonatomic, readonly) bool _isUsingAlternateURLForImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) bool canShowAnimationControls;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) NSString *imageMIMEType;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)activatedElementInfoWithInteractionInformationAtPosition:(const void*)arg1 userInfo:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ID;
- (id)URL;
- (const void*)_animationsUnderElement;
- (id)_initWithInteractionInformationAtPosition:(const void*)arg1 isUsingAlternateURLForImage:(bool)arg2 userInfo:(id)arg3;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 image:(void*)arg3 information:(const void*)arg4;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 image:(void*)arg4 userInfo:(id)arg5 information:(const void*)arg6;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 information:(const void*)arg4;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const struct IntPoint { int x1; int x2; }*)arg4 title:(id)arg5 ID:(id)arg6 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 image:(void*)arg8 imageMIMEType:(id)arg9 isAnimatedImage:(bool)arg10 isAnimating:(bool)arg11 canShowAnimationControls:(bool)arg12 animationsUnderElement:(struct Vector<WebCore::ElementAnimationContext, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ElementAnimationContext {} *x1; unsigned int x2; unsigned int x3; })arg13 userInfo:(id)arg14;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 userInfo:(id)arg4 information:(const void*)arg5;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 information:(const void*)arg3;
- (id)_initWithType:(long long)arg1 image:(void*)arg2 information:(const void*)arg3;
- (struct IntPoint { int x1; int x2; })_interactionLocation;
- (bool)_isImage;
- (bool)_isUsingAlternateURLForImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (bool)canShowAnimationControls;
- (id)image;
- (id)imageMIMEType;
- (id)imageURL;
- (bool)isAnimatedImage;
- (bool)isAnimating;
- (id)title;
- (long long)type;
- (id)userInfo;

@end

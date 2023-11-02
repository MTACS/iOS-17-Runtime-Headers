
@interface _WKAppHighlight : NSObject {
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _highlight;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    }  _image;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _text;
}

@property (nonatomic, readonly) NSData *highlight;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *text;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)highlight;
- (id)image;
- (id)initWithHighlight:(id)arg1 text:(id)arg2 image:(id)arg3;
- (id)text;

@end

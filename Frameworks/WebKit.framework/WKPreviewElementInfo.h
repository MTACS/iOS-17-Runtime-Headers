
@interface WKPreviewElementInfo : NSObject <NSCopying> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _linkURL;
}

@property (nonatomic, readonly) NSURL *linkURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLinkURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)linkURL;

@end

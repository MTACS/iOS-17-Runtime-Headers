
@interface WKEditCommand : NSObject {
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> { 
        struct WebEditCommandProxy {} *m_ptr; 
    }  _command;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)command;
- (id)initWithWebEditCommandProxy:(void*)arg1;

@end

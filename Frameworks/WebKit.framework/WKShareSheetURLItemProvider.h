
@interface WKShareSheetURLItemProvider : UIActivityItemProvider {
    struct RetainPtr<LPLinkMetadata> { 
        void *m_ptr; 
    }  _metadata;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _url;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)item;

@end

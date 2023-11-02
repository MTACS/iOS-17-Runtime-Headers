
@interface WKShareSheetFileItemProvider : UIActivityItemProvider {
    struct RetainPtr<LPLinkMetadata> { 
        void *m_ptr; 
    }  _headerMetadata;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _url;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)item;

@end

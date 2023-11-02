
@interface WKDOMDocumentParserYieldToken : NSObject {
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> { 
        struct __compressed_pair<WebCore::DocumentParserYieldToken *, std::default_delete<WebCore::DocumentParserYieldToken>> { 
            struct DocumentParserYieldToken {} *__value_; 
        } __ptr_; 
    }  _token;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDocument:(struct NakedRef<WebCore::Document> { struct Document {} *x1; })arg1;

@end

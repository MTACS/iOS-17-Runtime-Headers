
@interface WBSOpenSearchDescription : NSObject {
    NSString * _descriptionDocumentURLString;
    WBSOpenSearchURLTemplate * _searchURLTemplate;
    WBSOpenSearchURLTemplate * _urlTemplateForSuggestionsInJSON;
    WBSOpenSearchURLTemplate * _urlTemplateForSuggestionsInXML;
}

@property (nonatomic, readonly) NSString *descriptionDocumentURLString;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInXML;

- (void).cxx_destruct;
- (id)descriptionDocumentURLString;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)searchURLTemplate;
- (id)urlTemplateForSuggestionsInJSON;
- (id)urlTemplateForSuggestionsInXML;

@end

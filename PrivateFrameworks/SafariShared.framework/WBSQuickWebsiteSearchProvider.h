
@interface WBSQuickWebsiteSearchProvider : NSObject {
    NSDate * _dateAdded;
    NSDate * _dateOfLastSearch;
    <WBSQuickWebsiteSearchProviderDelegate> * _delegate;
    NSString * _displayName;
    NSString * _hostname;
    NSString * _openSearchDescriptionURLString;
    WBSOpenSearchURLTemplate * _searchURLTemplateFromForm;
    NSString * _sourcePageURLString;
}

@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, copy) NSDate *dateOfLastSearch;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) WBSOpenSearchDescription *openSearchDescription;
@property (nonatomic, copy) NSString *openSearchDescriptionURLString;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (nonatomic, retain) WBSOpenSearchURLTemplate *searchURLTemplateFromForm;
@property (nonatomic, readonly) NSString *sourcePageURLString;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;

- (void).cxx_destruct;
- (id)dateAdded;
- (id)dateOfLastSearch;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)hostname;
- (id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3;
- (id)openSearchDescription;
- (id)openSearchDescriptionURLString;
- (id)searchURLTemplate;
- (id)searchURLTemplateFromForm;
- (void)setDateOfLastSearch:(id)arg1;
- (void)setOpenSearchDescriptionURLString:(id)arg1;
- (void)setSearchURLTemplateFromForm:(id)arg1;
- (id)sourcePageURLString;
- (id)urlTemplateForSuggestionsInJSON;

@end

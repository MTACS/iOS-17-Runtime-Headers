
@interface VUIDocumentDataSource : NSObject {
    NSArray * _childDocumentDataSources;
    VUIDocumentContextData * _contextData;
    NSString * _controllerRef;
    NSString * _documentRef;
    NSString * _documentType;
    NSString * _identifier;
    NSString * _marketingTabIdentifier;
    VUIDocumentPreFetchedData * _prefetchData;
    bool  _shouldLoadPageImmediately;
    NSString * _title;
    VUIDocumentUIConfiguration * _uiConfiguration;
    NSArray * _universalLinks;
}

@property (nonatomic, retain) NSArray *childDocumentDataSources;
@property (nonatomic, retain) VUIDocumentContextData *contextData;
@property (nonatomic, retain) NSString *controllerRef;
@property (nonatomic, retain) NSString *documentRef;
@property (nonatomic, retain) NSString *documentType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *marketingTabIdentifier;
@property (nonatomic, retain) VUIDocumentPreFetchedData *prefetchData;
@property (nonatomic) bool shouldLoadPageImmediately;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) VUIDocumentUIConfiguration *uiConfiguration;
@property (nonatomic, retain) NSArray *universalLinks;

+ (id)documentDataSourceWithDictionary:(id)arg1;
+ (bool)isCanonicalDocumentRef:(id)arg1;

- (void).cxx_destruct;
- (id)childDocumentDataSources;
- (id)contextData;
- (id)controllerRef;
- (id)documentRef;
- (id)documentType;
- (id)identifier;
- (id)initWithDataSourceDict:(id)arg1;
- (id)initWithDocumentRef:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)marketingTabIdentifier;
- (id)prefetchData;
- (void)setChildDocumentDataSources:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setControllerRef:(id)arg1;
- (void)setDocumentRef:(id)arg1;
- (void)setDocumentType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMarketingTabIdentifier:(id)arg1;
- (void)setPrefetchData:(id)arg1;
- (void)setShouldLoadPageImmediately:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUiConfiguration:(id)arg1;
- (void)setUniversalLinks:(id)arg1;
- (bool)shouldLoadPageImmediately;
- (id)title;
- (id)uiConfiguration;
- (id)universalLinks;

@end


@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem> {
    WBSParsecImageRepresentation * _imageRepresentation;
    NSString * _label;
    long long  _parsecQueryID;
    NSURL * _url;
    SFSearchResult * sfSearchResultValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)schema;

- (void).cxx_destruct;
- (unsigned long long)engagementDestination;
- (id)imageRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)label;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (void)setParsecQueryID:(long long)arg1;
- (id)sfSearchResultValue;
- (id)url;

@end

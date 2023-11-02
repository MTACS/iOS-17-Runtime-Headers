
@interface FBKAnnouncement : FBKManagedFeedbackObject <FBKSearchableDocument> {
    NSString * cachedFullHTMLContent;
}

@property (retain) NSString *body;
@property (retain) NSString *cachedFullHTMLContent;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isStub;
@property (retain) NSString *searchText;
@property (readonly) Class superclass;
@property (retain) NSString *title;
@property (retain) NSString *type;
@property bool unread;
@property (retain) NSDate *updatedAt;

+ (id)entityName;

- (void).cxx_destruct;
- (id)cachedFullHTMLContent;
- (id)fullHTMLContent;
- (id)generateSearchText;
- (void)setCachedFullHTMLContent:(id)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end

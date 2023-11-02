
@interface SYContentItem : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting> {
    NSURL * _activityCanonicalURL;
    NSString * _activityPersistentIdentifier;
    NSString * _activityTargetContentIdentifier;
    NSString * _activityType;
    NSString * _displayTitle;
    NSUUID * _itemIdentifier;
    NSURL * _itemURL;
    NSData * _linkPreviewMetadata;
    long long  _previewLoadLevel;
    NSString * _sourceIdentifier;
    NSString * _sourceLastKnownName;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) NSURL *activityCanonicalURL;
@property (nonatomic, readonly, copy) NSString *activityPersistentIdentifier;
@property (nonatomic, readonly, copy) NSString *activityTargetContentIdentifier;
@property (nonatomic, readonly, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *itemIdentifier;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (retain) NSData *linkPreviewMetadata;
@property (nonatomic) long long previewLoadLevel;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceLastKnownName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly, copy) NSString *webpageDisplayDomain;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)activityCanonicalURL;
- (id)activityPersistentIdentifier;
- (id)activityTargetContentIdentifier;
- (id)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)description;
- (id)displayTitle;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDisplayTitle:(id)arg1 sourceIdentifier:(id)arg2 sourceName:(id)arg3 itemURL:(id)arg4;
- (id)initWithDisplayTitle:(id)arg1 sourceIdentifier:(id)arg2 sourceName:(id)arg3 itemURL:(id)arg4 identifier:(id)arg5;
- (id)initWithItemIdentifier:(id)arg1 displayTitle:(id)arg2 sourceIdentifier:(id)arg3 sourceName:(id)arg4 itemURL:(id)arg5 activityType:(id)arg6 activityCanonicalURL:(id)arg7 activityTargetContentIdentifier:(id)arg8 activityPersistentIdentifier:(id)arg9 userActivity:(id)arg10;
- (id)initWithUserActivity:(id)arg1 sourceAppID:(id)arg2;
- (id)initWithUserActivity:(id)arg1 sourceAppID:(id)arg2 sourceAppName:(id)arg3;
- (id)initWithUserActivity:(id)arg1 sourceAppID:(id)arg2 sourceAppName:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)itemURL;
- (id)linkPreviewMetadata;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)loadFullPreviewIfNeeded;
- (void)loadFullPreviewIfNeededWithCompletion:(id /* block */)arg1;
- (long long)previewLoadLevel;
- (bool)representsSameContentAsItem:(id)arg1;
- (id)searchableItemLinkingRelatedIdentifier:(id)arg1 domainIdentifier:(id)arg2;
- (void)setLinkPreviewMetadata:(id)arg1;
- (void)setLinkPreviewMetadata:(id)arg1 loadLevel:(long long)arg2;
- (void)setPreviewLoadLevel:(long long)arg1;
- (id)sourceIdentifier;
- (id)sourceLastKnownName;
- (id)userActivity;
- (id)webpageDisplayDomain;

@end

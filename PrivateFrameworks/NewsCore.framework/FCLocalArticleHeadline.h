
@interface FCLocalArticleHeadline : FCHeadline {
    <FCChannelProviding> * _channel;
    NSDictionary * _dictionary;
    NSString * _path;
    FCHeadlineThumbnail * _thumbnail;
    bool  _webEmbedsEnabled;
}

@property (nonatomic, readonly) <FCChannelProviding> *channel;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)blockedStorefrontIDs;
- (id)channel;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)contentWithContext:(id)arg1;
- (id)dictionary;
- (bool)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isLocalDraft;
- (bool)isPremium;
- (bool)isSponsored;
- (id)lastModifiedDate;
- (id)localDraftPath;
- (id)path;
- (id)primaryAudience;
- (id)publishDate;
- (id)shortExcerpt;
- (id)sourceChannel;
- (id)sourceName;
- (id)surfacedByBinID;
- (id)thumbnail;
- (id)thumbnailAssetHandle;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (id)title;
- (id)topicIDs;
- (bool)useTransparentNavigationBar;
- (double)videoDuration;
- (id)videoURL;
- (bool)webEmbedsEnabled;

@end

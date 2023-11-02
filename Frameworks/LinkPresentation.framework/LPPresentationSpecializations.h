
@interface LPPresentationSpecializations : NSObject

+ (id)URLToOpenForURL:(id)arg1;
+ (id)articleTitleFromTitle:(id)arg1 withURL:(id)arg2;
+ (id)businessChatURLToOpenForURL:(id)arg1;
+ (id)canonicalMetadataURLForURL:(id)arg1;
+ (id)destinationForGoogleRedirectURL:(id)arg1;
+ (bool)isAppStoreStoryURL:(id)arg1;
+ (bool)isAppleFitnessURL:(id)arg1;
+ (bool)isAppleHealthURL:(id)arg1;
+ (bool)isAppleMapsCollectionURL:(id)arg1;
+ (bool)isAppleMapsURL:(id)arg1;
+ (bool)isAppleMusicClassicalURL:(id)arg1;
+ (bool)isAppleNewsURL:(id)arg1;
+ (bool)isApplePhotosSharedLibraryInvitationURL:(id)arg1;
+ (bool)isAppleTVURL:(id)arg1;
+ (bool)isArticle:(id)arg1;
+ (bool)isArticleWithActivityPub:(id)arg1;
+ (bool)isGoogleSearchURL:(id)arg1;
+ (bool)isGoogleURL:(id)arg1;
+ (bool)isInstagramURL:(id)arg1;
+ (bool)isKnownBlankImageURL:(id)arg1;
+ (bool)isMicroblogPost:(id)arg1;
+ (bool)isMuninURL:(id)arg1;
+ (bool)isRedditStaticImage:(id)arg1;
+ (bool)isSharedPasswordsInviteURL:(id)arg1;
+ (bool)isSinaWeiboURL:(id)arg1;
+ (bool)isStockSymbolURL:(id)arg1;
+ (bool)isStocksNewsURL:(id)arg1;
+ (bool)isTikTokURL:(id)arg1;
+ (bool)isTweetURL:(id)arg1;
+ (bool)isTwitterProfileImageURL:(id)arg1;
+ (bool)isTwitterShortenerURL:(id)arg1;
+ (bool)isTwitterSummaryCardMetadata:(id)arg1;
+ (bool)isTwitterSummaryLargeImageCardMetadata:(id)arg1;
+ (bool)isWikipediaURL:(id)arg1;
+ (bool)isYouTubeEmbedURL:(id)arg1;
+ (bool)isYouTubeURL:(id)arg1;
+ (bool)isiCloudPhotoShareURL:(id)arg1;
+ (bool)isiCloudSharingURL:(id)arg1;
+ (bool)isiCloudURL:(id)arg1;
+ (bool)isiTunesStoreOrAdjacentURL:(id)arg1;
+ (bool)isiTunesStoreURLThatUsesWebMetadata:(id)arg1;
+ (id)nonDirectURLForImgurURL:(id)arg1;
+ (id)nonMobileRedditURLForRedditURL:(id)arg1;
+ (id)nonMobileTweetURLForTweetURL:(id)arg1;
+ (id)nonMobileYouTubeURLForURL:(id)arg1;
+ (id)searchQueryForURL:(id)arg1;
+ (bool)shouldAllowMultipleImagesForURL:(id)arg1;
+ (bool)shouldLoadInsteadOfUsingExistingWebViewForURL:(id)arg1;
+ (id)userAgentForURL:(id)arg1;
+ (id)youTubeVideoComponentsForEmbedURL:(id)arg1;
+ (id)youTubeVideoComponentsForVideoURL:(id)arg1;
+ (id)youTubeVideoURLForEmbedURL:(id)arg1;

@end

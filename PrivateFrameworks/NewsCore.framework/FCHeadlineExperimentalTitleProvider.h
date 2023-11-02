
@interface FCHeadlineExperimentalTitleProvider : NSObject {
    NSString * _feldsparID;
    bool  _shouldShowAlternateHeadlines;
}

@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (nonatomic) bool shouldShowAlternateHeadlines;

+ (bool)isDebugModeEnabled;

- (void).cxx_destruct;
- (id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)feldsparID;
- (id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)initWithShouldShowAlternateHeadlines:(bool)arg1;
- (id)metadataForDefaultHeadlineWithTitle:(id)arg1;
- (void)setShouldShowAlternateHeadlines:(bool)arg1;
- (bool)shouldShowAlternateHeadlines;

@end

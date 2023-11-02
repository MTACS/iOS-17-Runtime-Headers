
@interface UIUnderstanding.UIUModelFetcher : NSObject {
    void catalogDownloaded;
    void clickabilityPortrait;
    void clickabilitySquare;
    void dispatchGroup;
    void dispatchQueue;
    void iconClassification;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  log;
    void mindnetPortrait;
    void mindnetSquare;
    void screenSimilarity;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (bool)areAssetsPresent;
- (id)init;
- (bool)startAssetDownloadWithModelSet:(long long)arg1 timeout:(double)arg2;

@end

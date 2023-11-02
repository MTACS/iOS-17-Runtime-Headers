
@interface AVAssetInternal : NSObject {
    NSString * anchorChapterType;
    NSArray * availableCanonicalizedChapterLanguages;
    NSArray * availableChapterLanguages;
    NSArray * availableChapterLocales;
    NSArray * chapterGroupInfo;
    AVDispatchOnce * loadChapterInfoOnce;
    <AVLoggingIdentifier> * loggingIdentifier;
    AVWeakReference * weakReference;
}

@end

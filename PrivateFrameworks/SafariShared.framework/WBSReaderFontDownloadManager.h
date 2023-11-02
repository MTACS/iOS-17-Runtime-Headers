
@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary * _fontFamilyToProgress;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)downloadFont:(id)arg1;
- (double)downloadProgressForFont:(id)arg1;
- (bool)hasOngoingRequestForFont:(id)arg1;
- (id)init;

@end

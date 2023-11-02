
@interface WFPopoverModel : NSObject <WFAddToHomeScreenActivityDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _fileActivityModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _iconEditorViewModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sharingPromptModel;
    void database;
}

- (void).cxx_destruct;
- (void)displayFileActivityWith:(id)arg1;
- (void)homeScreenActivityDidFinish:(id)arg1 success:(bool)arg2;
- (id)init;

@end

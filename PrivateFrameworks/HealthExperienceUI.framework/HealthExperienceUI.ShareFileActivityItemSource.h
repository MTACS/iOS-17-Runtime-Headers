
@interface HealthExperienceUI.ShareFileActivityItemSource : NSObject <UIActivityItemSource> {
    void filePath;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fileURL;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

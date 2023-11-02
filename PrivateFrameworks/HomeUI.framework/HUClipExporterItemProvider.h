
@interface HUClipExporterItemProvider : UIActivityItemProvider {
    NSURL * _clipURL;
}

@property (nonatomic, retain) NSURL *clipURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)clipURL;
- (id)initWithURL:(id)arg1;
- (id)item;
- (void)setClipURL:(id)arg1;

@end

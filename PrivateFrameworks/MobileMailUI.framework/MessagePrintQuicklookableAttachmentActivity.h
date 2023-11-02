
@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {
    UIPrintPageRenderer * _pageRenderer;
}

@property (nonatomic, retain) UIPrintPageRenderer *pageRenderer;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithPrintPageRenderer:(id)arg1;
- (id)pageRenderer;
- (void)performActivity;
- (void)setPageRenderer:(id)arg1;

@end

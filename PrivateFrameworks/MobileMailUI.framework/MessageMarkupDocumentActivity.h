
@interface MessageMarkupDocumentActivity : UIActivity {
    long long  _context;
    <ContentRepresentationHandlingDelegate> * _delegate;
}

@property (nonatomic) long long context;
@property (nonatomic) <ContentRepresentationHandlingDelegate> *delegate;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (long long)context;
- (id)delegate;
- (id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2;
- (void)performActivity;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end

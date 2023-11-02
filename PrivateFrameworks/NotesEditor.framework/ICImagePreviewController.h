
@interface ICImagePreviewController : UIViewController {
    ICAttachment * _attachment;
}

@property (nonatomic, retain) ICAttachment *attachment;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)attachment;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;

@end

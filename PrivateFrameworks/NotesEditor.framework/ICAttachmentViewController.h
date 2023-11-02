
@interface ICAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentViewControllerInitializing> {
    ICAttachment * _attachment;
    bool  _forManualRendering;
    NSLayoutManager * _layoutManager;
    ICTextAttachment * _textAttachment;
    NSTextLayoutManager * _textLayoutManager;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forManualRendering;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (readonly) Class superclass;
@property (nonatomic) ICTextAttachment *textAttachment;
@property (nonatomic, readonly) NSTextLayoutManager *textLayoutManager;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)attachment;
- (bool)forManualRendering;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(bool)arg2;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(bool)arg2 layoutManager:(id)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(bool)arg2 textLayoutManager:(id)arg3;
- (id)layoutManager;
- (void)loadView;
- (void)setForManualRendering:(bool)arg1;
- (void)setTextAttachment:(id)arg1;
- (id)textAttachment;
- (id)textLayoutManager;

@end

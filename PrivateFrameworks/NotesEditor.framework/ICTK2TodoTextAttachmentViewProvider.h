
@interface ICTK2TodoTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider {
    ICNAEventReporter * _eventReporter;
}

@property (nonatomic, retain) ICNAEventReporter *eventReporter;
@property (nonatomic, readonly) ICTextController *textController;
@property (nonatomic, readonly) ICTTTextStorage *textStorage;
@property (nonatomic, readonly) ICTK2TextView *textView;
@property (nonatomic, readonly) ICTodoButton *todoButton;
@property (nonatomic, readonly) ICTK2TodoTextAttachment *todoTextAttachment;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didPressTodoButton:(id)arg1;
- (id)eventReporter;
- (void)eventReporterLostSession:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)selectedRangesIntersectWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setEventReporter:(id)arg1;
- (id)textController;
- (id)textStorage;
- (id)textView;
- (id)todoButton;
- (id)todoTextAttachment;

@end

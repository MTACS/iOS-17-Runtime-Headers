
@interface PKFakeNotesDelegate : NSObject <PKScribbleInteractionDelegate> {
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (id)initWithTextView:(id)arg1;

@end

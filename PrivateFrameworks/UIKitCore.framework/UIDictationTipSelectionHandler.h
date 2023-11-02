
@interface UIDictationTipSelectionHandler : NSObject {
    <UIDictationTipHandlerDelegate> * _delegate;
    NSString * _selectionText;
}

@property (nonatomic) <UIDictationTipHandlerDelegate> *delegate;
@property (nonatomic, retain) NSString *selectionText;

- (void).cxx_destruct;
- (id)delegate;
- (void)finalizeSelectionTip;
- (id)initWithDelegate:(id)arg1;
- (id)selectionText;
- (void)setDelegate:(id)arg1;
- (void)setSelectionText:(id)arg1;
- (void)signalSelectedText:(id)arg1;

@end

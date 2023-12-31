
@interface MFCorecipientsIndicatorAtom : MFModernAtomView {
    <MFCorecipientsIndicatorAtomDelegate> * _delegate;
    NSArray * _recipients;
    bool  _touchesWereCancelled;
}

@property (nonatomic) <MFCorecipientsIndicatorAtomDelegate> *delegate;
@property (nonatomic, retain) NSArray *recipients;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithRecipients:(id)arg1;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

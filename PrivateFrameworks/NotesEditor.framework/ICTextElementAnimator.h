
@interface ICTextElementAnimator : NSObject {
    void destinationTrackedParagraphs;
    void originTrackedParagraphs;
    void textView;
    void uuidsToElementAnimationConfigurations;
}

- (void).cxx_destruct;
- (void)animateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithTextView:(id)arg1 originTrackedParagraphs:(id)arg2 destinationTrackedParagraphs:(id)arg3;

@end

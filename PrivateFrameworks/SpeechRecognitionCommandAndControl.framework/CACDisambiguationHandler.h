
@interface CACDisambiguationHandler : NSObject {
    id /* block */  _chosenLabeledElementHandler;
    NSArray * _labeledElements;
}

@property (nonatomic, copy) id /* block */ chosenLabeledElementHandler;
@property (retain) NSArray *labeledElements;

- (void).cxx_destruct;
- (id /* block */)chosenLabeledElementHandler;
- (void)handleChosenLabeledElement:(id)arg1;
- (id)initWithLabeledElements:(id)arg1;
- (id)labeledElements;
- (void)setChosenLabeledElementHandler:(id /* block */)arg1;
- (void)setLabeledElements:(id)arg1;

@end

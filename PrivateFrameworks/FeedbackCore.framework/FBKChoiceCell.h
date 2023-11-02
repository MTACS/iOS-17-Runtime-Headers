
@interface FBKChoiceCell : UITableViewCell {
    FBKQuestionChoice * _choice;
}

@property (nonatomic) FBKQuestionChoice *choice;

- (void).cxx_destruct;
- (id)appIconForChoice:(id)arg1;
- (id)choice;
- (void)evaluateSelectionWithValue:(id)arg1;
- (void)evaluateSelectionWithValues:(id)arg1;
- (void)setChoice:(id)arg1;
- (void)updateWithChoice:(id)arg1;

@end

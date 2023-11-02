
@interface CNCardPropertyAlertGroup : CNCardPropertyGroup {
    CNLabeledValue * _labeledValue;
}

@property (nonatomic, retain) CNLabeledValue *labeledValue;

- (void).cxx_destruct;
- (id)_loadPropertyItems;
- (id)labeledValue;
- (void)setLabeledValue:(id)arg1;

@end

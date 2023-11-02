
@interface TFFeedbackEntryLongText : TFFeedbackEntry {
    NSString * _placeholder;
}

@property (nonatomic, readonly, copy) NSString *placeholder;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3;
- (id)placeholder;

@end

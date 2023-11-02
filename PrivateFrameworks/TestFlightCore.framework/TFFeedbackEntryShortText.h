
@interface TFFeedbackEntryShortText : TFFeedbackEntry {
    unsigned long long  _contentType;
    NSString * _placeholder;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSString *placeholder;

- (void).cxx_destruct;
- (unsigned long long)contentType;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3 contentType:(unsigned long long)arg4;
- (id)placeholder;

@end

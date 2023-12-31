
@interface MSVSystemDialogResponse : NSObject {
    long long  _buttonIdentifier;
    NSArray * _textFieldValues;
}

@property (nonatomic, readonly) long long buttonIdentifier;
@property (nonatomic, readonly) NSArray *textFieldValues;

- (void).cxx_destruct;
- (long long)buttonIdentifier;
- (id)description;
- (id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2;
- (id)textFieldValues;

@end

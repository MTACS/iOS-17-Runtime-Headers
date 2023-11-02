
@interface TVRMSKeyboardInfo : NSObject {
    long long  _keyboardInputType;
    long long  _keyboardType;
    long long  _maximumCharacters;
    long long  _minimumCharacters;
    bool  _secureText;
    NSString * _subtitle;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic) long long keyboardInputType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long maximumCharacters;
@property (nonatomic) long long minimumCharacters;
@property (nonatomic) bool secureText;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithItemsArray:(id)arg1;
- (long long)keyboardInputType;
- (long long)keyboardType;
- (long long)maximumCharacters;
- (long long)minimumCharacters;
- (bool)secureText;
- (void)setKeyboardInputType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMaximumCharacters:(long long)arg1;
- (void)setMinimumCharacters:(long long)arg1;
- (void)setSecureText:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)text;
- (id)title;

@end

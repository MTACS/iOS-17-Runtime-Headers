
@interface STKTextInputSessionData : STKTextSessionData {
    NSString * _defaultText;
    bool  _isDigitsOnly;
    bool  _isSecure;
    unsigned long long  _maximumInputLength;
    unsigned long long  _minimumInputLength;
}

@property (nonatomic, readonly, copy) NSString *defaultText;
@property (nonatomic, readonly) bool isDigitsOnly;
@property (nonatomic, readonly) bool isSecure;
@property (nonatomic, readonly) unsigned long long maximumInputLength;
@property (nonatomic, readonly) unsigned long long minimumInputLength;

- (void).cxx_destruct;
- (id)defaultText;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isDigitsOnly;
- (bool)isSecure;
- (unsigned long long)maximumInputLength;
- (unsigned long long)minimumInputLength;

@end

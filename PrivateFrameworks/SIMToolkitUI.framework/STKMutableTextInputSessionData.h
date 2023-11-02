
@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (nonatomic, copy) NSString *defaultText;
@property (nonatomic) bool isDigitsOnly;
@property (nonatomic) bool isSecure;
@property (nonatomic) unsigned long long maximumInputLength;
@property (nonatomic) unsigned long long minimumInputLength;

- (void)setDefaultText:(id)arg1;
- (void)setIsDigitsOnly:(bool)arg1;
- (void)setIsSecure:(bool)arg1;
- (void)setMaximumInputLength:(unsigned long long)arg1;
- (void)setMinimumInputLength:(unsigned long long)arg1;

@end


@interface NSLocaleLanguage : NSObject {
    NSString * _threeCharacterCode;
    NSString * _twoCharacterCode;
}

@property (copy) NSString *threeCharacterCode;
@property (copy) NSString *twoCharacterCode;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setThreeCharacterCode:(id)arg1;
- (void)setTwoCharacterCode:(id)arg1;
- (id)threeCharacterCode;
- (id)twoCharacterCode;

@end

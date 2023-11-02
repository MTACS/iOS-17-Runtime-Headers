
@interface MRPasscodeCredentials : NSObject {
    unsigned long long  _characterCount;
    NSString * _passcode;
    unsigned int  _type;
}

@property (nonatomic) unsigned long long characterCount;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic) unsigned int type;

+ (id)standardCredentials;

- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)passcode;
- (void)setCharacterCount:(unsigned long long)arg1;
- (void)setPasscode:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end

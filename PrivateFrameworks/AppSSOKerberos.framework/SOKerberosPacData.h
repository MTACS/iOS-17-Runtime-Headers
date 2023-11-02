
@interface SOKerberosPacData : NSObject {
    NSString * _effectiveName;
    NSString * _fullName;
    NSString * _homeDirectory;
    NSDate * _passwordCanChange;
    NSDate * _passwordLastSet;
    NSDate * _passwordMustChange;
    bool  _passwordNeverExpires;
}

@property (retain) NSString *effectiveName;
@property (retain) NSString *fullName;
@property (retain) NSString *homeDirectory;
@property (retain) NSDate *passwordCanChange;
@property (retain) NSDate *passwordLastSet;
@property (retain) NSDate *passwordMustChange;
@property bool passwordNeverExpires;

- (void).cxx_destruct;
- (id)convertFromFileTime:(unsigned long long)arg1;
- (id)description;
- (id)effectiveName;
- (id)fullName;
- (id)homeDirectory;
- (id)initWithValidationInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned short *x_7_1_7; } x7; struct { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned short *x_8_1_7; } x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned short *x_9_1_7; } x9; struct { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; unsigned int x_10_1_6; unsigned short *x_10_1_7; } x10; struct { unsigned short x_11_1_1; unsigned short x_11_1_2; unsigned int x_11_1_3; unsigned int x_11_1_4; unsigned int x_11_1_5; unsigned int x_11_1_6; unsigned short *x_11_1_7; } x11; }*)arg1;
- (id)passwordCanChange;
- (id)passwordLastSet;
- (id)passwordMustChange;
- (bool)passwordNeverExpires;
- (void)setEffectiveName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHomeDirectory:(id)arg1;
- (void)setPasswordCanChange:(id)arg1;
- (void)setPasswordLastSet:(id)arg1;
- (void)setPasswordMustChange:(id)arg1;
- (void)setPasswordNeverExpires:(bool)arg1;

@end

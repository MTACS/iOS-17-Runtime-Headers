
@protocol XREngineeringTypeDef

@required

- (unsigned long long)attributes;
- (long long)conventionalBitWidth;
- (bool)deprecated;
- (XREngineeringTypeEncodingConvention *)encodingConvention;
- (NSString *)enumString;
- (NSString *)errorStringHeader;
- (bool)experimental;
- (unsigned char)impl;
- (NSString *)mnemonic;
- (NSString *)title;
- (NSString *)usage;

@end

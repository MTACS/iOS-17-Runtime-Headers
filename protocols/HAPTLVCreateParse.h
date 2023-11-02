
@protocol HAPTLVCreateParse

@required

- (bool)_parseFromTLVData;
- (NSString *)descriptionWithIndent:(HMFStringIndentation *)arg1;
- (NSData *)tlvData;

@end

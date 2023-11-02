
@protocol UAPBIRConverter <NSObject>

@required

+ (void)registerConverter;

- (NSData *)convertIRDataToPlatform:(NSData *)arg1;
- (NSData *)convertPlatformDataToIR:(NSData *)arg1;
- (NSString *)typeString;

@end

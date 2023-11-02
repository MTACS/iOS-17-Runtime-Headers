
@protocol HMDSettingConstraintModelProtocol <HMDSettingModelBaseProtocol>

@required

- (NSData *)dataValue;
- (NSNumber *)numberValue;
- (void)setDataValue:(NSData *)arg1;
- (void)setNumberValue:(NSNumber *)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setType:(NSNumber *)arg1;
- (NSString *)stringValue;
- (NSNumber *)type;

@end

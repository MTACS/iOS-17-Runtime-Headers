
@protocol HMDSettingModelProtocol <HMDSettingModelBaseProtocol>

@required

- (NSData *)dataValue;
- (NSString *)name;
- (NSNumber *)numberValue;
- (NSNumber *)properties;
- (NSUUID *)selectionIdentifier;
- (NSString *)selectionValue;
- (void)setDataValue:(NSData *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setNumberValue:(NSNumber *)arg1;
- (void)setProperties:(NSNumber *)arg1;
- (void)setSelectionIdentifier:(NSUUID *)arg1;
- (void)setSelectionValue:(NSString *)arg1;
- (bool)setSettingValue:(HMSettingValue *)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setType:(NSNumber *)arg1;
- (NSString *)stringValue;
- (NSNumber *)type;

@end

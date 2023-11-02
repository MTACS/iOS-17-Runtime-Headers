
@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding> {
    NSString * _deviceIdentifier;
    NSString * _generation;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *generation;

+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)generation;
- (id)initWithCoder:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setGeneration:(id)arg1;

@end


@interface AMSXDDevice : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) NSDictionary *JSONDictionary;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) long long type;

+ (id)activePairedDevices;
+ (id)allPairedDevices;
+ (id)deviceFromIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1 type:(long long)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end

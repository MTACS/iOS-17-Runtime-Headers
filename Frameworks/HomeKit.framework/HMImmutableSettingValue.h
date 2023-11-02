
@interface HMImmutableSettingValue : NSObject <HMFObject, HMMessageEncoding>

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initSettingValue;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)privateDescription;
- (id)protoPayload;
- (id)shortDescription;

@end

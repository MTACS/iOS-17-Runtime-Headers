
@interface WFVPNConfiguration : NSObject <NSSecureCoding, WFSerializableContent> {
    INAppDescriptor * _appDescriptor;
    NSUUID * _identifier;
    NSString * _title;
}

@property (nonatomic, readonly) INAppDescriptor *appDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDescriptor;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 appDescriptor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)title;
- (id)wfSerializedRepresentation;

@end

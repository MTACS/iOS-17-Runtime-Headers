
@interface WFMessageGroup : NSObject <NSSecureCoding, WFSerializableContent> {
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)initWithSpeakableString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)wfSerializedRepresentation;

@end

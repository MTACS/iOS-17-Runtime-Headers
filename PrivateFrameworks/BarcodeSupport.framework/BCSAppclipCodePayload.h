
@interface BCSAppclipCodePayload : NSObject <BCSCodePayload> {
    NSData * _payload;
    unsigned long long  _version;
}

@property (nonatomic, readonly) long long codeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)codeType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (void)savePayloadInUserActivity:(id)arg1;
- (unsigned long long)version;

@end

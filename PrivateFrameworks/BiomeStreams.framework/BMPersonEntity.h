
@interface BMPersonEntity : NSObject <BMProtoBufWrapper> {
    NSArray * _addresses;
    NSDictionary * _attributes;
    NSString * _contactId;
    NSString * _customId;
    NSArray * _emailAddresses;
    NSArray * _names;
    NSArray * _phoneNumbers;
    NSArray * _socialMediaHandles;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *contactId;
@property (nonatomic, readonly) NSString *customId;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *socialMediaHandles;

- (void).cxx_destruct;
- (id)addresses;
- (id)attributes;
- (id)contactId;
- (id)customId;
- (id)emailAddresses;
- (id)encodeAsProto;
- (id)initWithNames:(id)arg1 customId:(id)arg2 contactId:(id)arg3 emailAddresses:(id)arg4 addresses:(id)arg5 phoneNumbers:(id)arg6 socialMediaHandles:(id)arg7 attributes:(id)arg8;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)names;
- (id)phoneNumbers;
- (id)proto;
- (id)socialMediaHandles;

@end

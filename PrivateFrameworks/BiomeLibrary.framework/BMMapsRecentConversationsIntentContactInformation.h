
@interface BMMapsRecentConversationsIntentContactInformation : BMEventBase <BMStoreData> {
    NSArray * _emailAddress;
    NSString * _friendlyName;
    NSString * _fullDisplayName;
    NSString * _identifier;
    NSArray * _phoneNumber;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *emailAddress;
@property (nonatomic, readonly) NSString *friendlyName;
@property (nonatomic, readonly) NSString *fullDisplayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *phoneNumber;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_emailAddressJSONArray;
- (id)_phoneNumberJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)emailAddress;
- (id)friendlyName;
- (id)fullDisplayName;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fullDisplayName:(id)arg2 friendlyName:(id)arg3 emailAddress:(id)arg4 phoneNumber:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)phoneNumber;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end

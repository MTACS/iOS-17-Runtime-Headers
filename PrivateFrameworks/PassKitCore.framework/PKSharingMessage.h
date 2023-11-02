
@interface PKSharingMessage : NSObject <NSSecureCoding> {
    PKSharingMessageDisplayInformation * _displayInformation;
    unsigned long long  _format;
    NSString * _identifier;
    NSData * _payload;
    unsigned long long  _type;
}

@property (nonatomic, retain) PKSharingMessageDisplayInformation *displayInformation;
@property (nonatomic) unsigned long long format;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) unsigned long long type;

+ (id)embeddedMessageDictionaryForShareURL:(id)arg1 targetDevice:(long long)arg2;
+ (id)specializedMessageFromPayload:(id)arg1 displayInformation:(id)arg2 outError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPayload:(id)arg1 format:(unsigned long long)arg2 type:(unsigned long long)arg3 displayInformation:(id)arg4;
- (void)addEmbeddedMessages:(id)arg1;
- (bool)configureWithContent:(id)arg1;
- (id)description;
- (id)displayInformation;
- (id)embeddedAddressForDeviceType:(long long)arg1;
- (id)embeddedMessageURLs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)format;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 format:(unsigned long long)arg2 type:(unsigned long long)arg3 displayInformation:(id)arg4;
- (id)payload;
- (void)setDisplayInformation:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)typeDescription;
- (void)updateMessageContentTo:(id)arg1;

@end

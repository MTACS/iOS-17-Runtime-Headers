
@interface PKDiscoveryManifest : NSObject <NSSecureCoding> {
    NSArray * _discoveryItems;
    PKDiscoveryMessagesMetadata * _messagesMetadata;
    bool  _miniCardsAllowed;
    NSArray * _rules;
    long long  _version;
}

@property (nonatomic, readonly) NSArray *discoveryItems;
@property (nonatomic, readonly) PKDiscoveryMessagesMetadata *messagesMetadata;
@property (getter=isMiniCardsAllowed, nonatomic, readonly) bool miniCardsAllowed;
@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) long long version;

+ (id)manifestFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)discoveryItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4;
- (bool)isMiniCardsAllowed;
- (id)messagesMetadata;
- (id)rules;
- (long long)version;

@end

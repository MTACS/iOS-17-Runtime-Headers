
@interface EMThreadCollectionItemID : NSObject <EFCacheable, EMCollectionItemID> {
    long long  _conversationID;
}

@property (nonatomic, readonly) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)cachedSelf;
- (long long)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end

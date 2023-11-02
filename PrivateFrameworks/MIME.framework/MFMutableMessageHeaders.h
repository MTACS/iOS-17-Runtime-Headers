
@interface MFMutableMessageHeaders : MFMessageHeaders <ECMutableMessageHeaders> {
    NSMutableDictionary * _headersAdded;
    NSMutableArray * _headersRemoved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encodedHeaders;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *listUnsubscribeCommands;
@property (nonatomic, readonly) NSString *listUnsubscribePostContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(bool)arg3;
- (id)allHeaderKeys;
- (id)description;
- (id)encodedHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (bool)hasHeaderForKey:(id)arg1;
- (id)headersDictionary;
- (id)mutableCopy;
- (void)removeHeaderForKey:(id)arg1;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;
- (void)setAddressListForBcc:(id)arg1;
- (void)setAddressListForCc:(id)arg1;
- (void)setAddressListForReplyTo:(id)arg1;
- (void)setAddressListForSender:(id)arg1;
- (void)setAddressListForTo:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (void)setReferences:(id)arg1;
- (void)stripInternalHeaders;

@end

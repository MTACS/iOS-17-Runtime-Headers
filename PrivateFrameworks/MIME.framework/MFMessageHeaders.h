
@interface MFMessageHeaders : NSObject <ECMessageHeaders, NSCopying> {
    NSData * _data;
    unsigned int  _preferredEncoding;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encodedHeaders;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *listUnsubscribeCommands;
@property (nonatomic, readonly) NSString *listUnsubscribePostContent;
@property (nonatomic) unsigned int preferredEncoding;
@property (readonly) Class superclass;

+ (id)addressListFromEncodedString:(id)arg1;
+ (id)basicHeaders;
+ (id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned int)arg2;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3;
+ (bool)isStructuredHeaderKey:(id)arg1;
+ (bool)shouldDecodeHeaderForKey:(id)arg1;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;

- (void).cxx_destruct;
- (id)_capitalizedKeyForKey:(id)arg1;
- (id)_commaSeparatedValuesForKey:(id)arg1 includeAngleBracket:(bool)arg2;
- (unsigned int)_contentTypeEncoding;
- (id)_copyAddressListForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(bool)arg3;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned long long*)arg2;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)allHeaderKeys;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)copyAddressListForBcc;
- (id)copyAddressListForCc;
- (id)copyAddressListForReplyTo;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForSender;
- (id)copyAddressListForTo;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)encodedHeaders;
- (void)enumerateKeysAndBytesUsingBlock:(id /* block */)arg1;
- (id)firstAddressForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)firstSenderAddress;
- (bool)hasHeaderForKey:(id)arg1;
- (id)headerData;
- (id)headersDictionary;
- (id)headersForKey:(id)arg1;
- (id)headersRequiringSMTPUTF8Support;
- (id)init;
- (id)initWithASCIIHeaderString:(id)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned int)arg2;
- (id)listUnsubscribeCommands;
- (id)listUnsubscribePostContent;
- (id)mutableCopy;
- (unsigned int)preferredEncoding;
- (id)references;
- (void)setData:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;

@end

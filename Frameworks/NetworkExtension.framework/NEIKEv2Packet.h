
@interface NEIKEv2Packet : NSObject <NEPrettyDescription> {
    NSArray * _customPayloads;
    bool  _decrypted;
    NEIKEv2EncryptedPayload * _encryptedPayload;
    unsigned int  _fragmentNumber;
    NEIKEv2IKESPI * _initiatorSPI;
    bool  _isFragmented;
    bool  _isInbound;
    bool  _isInitiator;
    bool  _isResponse;
    int  _messageID;
    NSArray * _notifications;
    NSArray * _packetDatagrams;
    NSArray * _rawPayloads;
    NEIKEv2IKESPI * _responderSPI;
    unsigned int  _totalFragments;
}

@property (readonly) bool decrypted;
@property (readonly) unsigned int fragmentNumber;
@property (readonly) bool isFragmented;
@property (readonly) unsigned int totalFragments;

+ (id)copyTypeDescription;
+ (bool)encryptPayloads;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (id)copyShortDescription;
- (bool)decrypted;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)filloutPayloads;
- (unsigned int)fragmentNumber;
- (void)gatherPayloads;
- (bool)isFragmented;
- (unsigned int)totalFragments;

@end

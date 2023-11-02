
@interface BCMessage : NSObject {
    NSString * _accessibilityLabel;
    BCImageStore * _imageStore;
    NSString * _internalRootKey;
    bool  _isFromMe;
    BCMessageData * _messageData;
    NSString * _messageGUID;
    BCMessageInfo * _receivedMessage;
    BCMessageInfo * _replyMessage;
    NSString * _requestIdentifier;
    <BCDictionarySerializable> * _rootObject;
    NSUUID * _sessionIdentifier;
    NSString * _subcaption;
    NSAttributedString * _subtitle;
    NSString * _summaryText;
    NSString * _title;
    long long  _version;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) BCImageStore *imageStore;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) bool isVersionSupported;
@property (nonatomic, readonly) BCMessageData *messageData;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) BCMessageInfo *receivedMessage;
@property (nonatomic, readonly) BCMessageInfo *replyMessage;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *rootKey;
@property (nonatomic, readonly) <BCDictionarySerializable> *rootObject;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) NSString *subcaption;
@property (nonatomic, retain) NSAttributedString *subtitle;
@property (nonatomic, retain) NSString *summaryText;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long version;

+ (id)defaultBubbleTitleFor:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)data;
- (id)dictionaryValue;
- (id)image;
- (id)imageStore;
- (id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5;
- (id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(bool)arg4;
- (id)initWithData:(id)arg1 url:(id)arg2 sessionIdentifier:(id)arg3 isFromMe:(bool)arg4;
- (bool)isFromMe;
- (bool)isVersionSupported;
- (id)makeRootObjectWithMessageData:(id)arg1 dictionary:(id)arg2 imageDictionary:(id)arg3 version:(long long)arg4;
- (id)messageData;
- (id)messageGUID;
- (id)receivedMessage;
- (id)replyMessage;
- (id)requestIdentifier;
- (id)rootKey;
- (id)rootObject;
- (id)sessionIdentifier;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setSubcaption:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)subcaption;
- (id)subtitle;
- (id)summaryText;
- (id)title;
- (long long)type;
- (id)url;
- (long long)version;

@end

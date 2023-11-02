
@interface BMCommunicationSafetyResultEvent : NSObject <BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _childID;
    NSArray * _contactHandles;
    unsigned int  _contentCount;
    NSString * _contentID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    NSString * _conversationID;
    NSURL * _conversationURL;
    NSString * _deviceID;
    unsigned long long  _eventDirection;
    unsigned long long  _eventType;
    NSData * _imageData;
    NSString * _senderHandle;
    NSString * _sourceBundleID;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *childID;
@property (nonatomic, readonly, copy) NSArray *contactHandles;
@property (nonatomic) unsigned int contentCount;
@property (nonatomic, readonly, copy) NSString *contentID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly, copy) NSString *conversationID;
@property (nonatomic, readonly, copy) NSURL *conversationURL;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceID;
@property (nonatomic) unsigned long long eventDirection;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly, copy) NSString *senderHandle;
@property (nonatomic, readonly, copy) NSString *sourceBundleID;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)childID;
- (id)contactHandles;
- (unsigned int)contentCount;
- (id)contentID;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)conversationID;
- (id)conversationURL;
- (unsigned int)dataVersion;
- (id)deviceID;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventDirection;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11;
- (id)initWithChildID:(id)arg1 deviceID:(id)arg2 sourceBundleID:(id)arg3 absoluteTimeStamp:(double)arg4 eventDirection:(unsigned long long)arg5 eventType:(unsigned long long)arg6 contentType:(unsigned long long)arg7 contactHandles:(id)arg8 contentID:(id)arg9 conversationID:(id)arg10 imageData:(id)arg11 senderHandle:(id)arg12 contentURL:(id)arg13 conversationURL:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)senderHandle;
- (id)serialize;
- (void)setContentCount:(unsigned int)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setEventDirection:(unsigned long long)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (id)sourceBundleID;

@end

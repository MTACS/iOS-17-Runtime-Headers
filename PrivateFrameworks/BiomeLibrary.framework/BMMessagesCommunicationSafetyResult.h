
@interface BMMessagesCommunicationSafetyResult : BMEventBase <BMStoreData> {
    NSString * _childID;
    NSArray * _contactHandles;
    NSString * _contentID;
    int  _contentType;
    NSString * _contentURL;
    NSString * _conversationID;
    NSString * _conversationURL;
    NSString * _deviceID;
    int  _eventDirection;
    int  _eventType;
    bool  _hasRaw_absoluteTimestamp;
    NSData * _imageData;
    double  _raw_absoluteTimestamp;
    NSString * _senderHandle;
    NSString * _sourceBundleID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *childID;
@property (nonatomic, readonly) NSArray *contactHandles;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) NSString *contentURL;
@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) NSString *conversationURL;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) int eventDirection;
@property (nonatomic, readonly) int eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *senderHandle;
@property (nonatomic, readonly) NSString *sourceBundleID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_contactHandlesJSONArray;
- (id)absoluteTimestamp;
- (id)childID;
- (id)contactHandles;
- (id)contentID;
- (int)contentType;
- (id)contentURL;
- (id)conversationID;
- (id)conversationURL;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceID;
- (int)eventDirection;
- (int)eventType;
- (id)imageData;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 childID:(id)arg2 deviceID:(id)arg3 eventDirection:(int)arg4 eventType:(int)arg5 contentType:(int)arg6 contactHandles:(id)arg7 contentID:(id)arg8 conversationID:(id)arg9 imageData:(id)arg10 sourceBundleID:(id)arg11 senderHandle:(id)arg12 contentURL:(id)arg13 conversationURL:(id)arg14;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)senderHandle;
- (id)serialize;
- (id)sourceBundleID;
- (void)writeTo:(id)arg1;

@end

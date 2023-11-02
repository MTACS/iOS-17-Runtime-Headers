
@interface BMSensitiveContentAnalysisUIInteraction : BMEventBase <BMStoreData> {
    int  _action;
    int  _ageGroup;
    NSString * _clientBundleID;
    int  _contentType;
    int  _eventDirection;
    int  _interactionType;
    int  _screen;
    NSString * _trackingVersion;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) int ageGroup;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int eventDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interactionType;
@property (nonatomic, readonly) int screen;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trackingVersion;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)action;
- (int)ageGroup;
- (id)clientBundleID;
- (int)contentType;
- (unsigned int)dataVersion;
- (id)description;
- (int)eventDirection;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInteractionType:(int)arg1 ageGroup:(int)arg2 eventDirection:(int)arg3 screen:(int)arg4 action:(int)arg5 contentType:(int)arg6 clientBundleID:(id)arg7 trackingVersion:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (int)interactionType;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)screen;
- (id)serialize;
- (id)trackingVersion;
- (void)writeTo:(id)arg1;

@end

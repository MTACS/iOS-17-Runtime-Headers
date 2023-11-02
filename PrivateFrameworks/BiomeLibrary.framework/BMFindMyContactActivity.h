
@interface BMFindMyContactActivity : BMEventBase <BMStoreData> {
    int  _actionType;
    NSString * _bundleID;
    NSString * _handle;
    bool  _hasRaw_eventTimestampBegin;
    bool  _hasRaw_eventTimestampEnd;
    double  _raw_eventTimestampBegin;
    double  _raw_eventTimestampEnd;
}

@property (nonatomic, readonly) int actionType;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventTimestampBegin;
@property (nonatomic, readonly) NSDate *eventTimestampEnd;
@property (nonatomic, readonly) NSString *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)actionType;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventTimestampBegin;
- (id)eventTimestampEnd;
- (id)handle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithHandle:(id)arg1 actionType:(int)arg2 eventTimestampBegin:(id)arg3 eventTimestampEnd:(id)arg4 bundleID:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end

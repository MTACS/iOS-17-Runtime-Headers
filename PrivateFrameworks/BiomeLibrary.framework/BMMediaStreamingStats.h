
@interface BMMediaStreamingStats : BMEventBase <BMStoreData> {
    NSString * _appName;
    NSString * _eventName;
    NSString * _extra;
    bool  _hasMeasure;
    double  _measure;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *extra;
@property (nonatomic) bool hasMeasure;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double measure;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)appName;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventName;
- (id)extra;
- (bool)hasMeasure;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAppName:(id)arg1 eventName:(id)arg2 measure:(id)arg3 extra:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)measure;
- (id)serialize;
- (void)setHasMeasure:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

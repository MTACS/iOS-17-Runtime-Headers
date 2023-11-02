
@interface BMWebAppInFocus : BMEventBase <BMStoreData> {
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasStarting;
    NSString * _identifier;
    NSString * _manifestId;
    NSString * _name;
    double  _raw_absoluteTimestamp;
    bool  _starting;
    int  _type;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *manifestId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 absoluteTimestamp:(id)arg2 type:(int)arg3 identifier:(id)arg4 name:(id)arg5 manifestId:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)manifestId;
- (id)name;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (int)type;
- (void)writeTo:(id)arg1;

@end

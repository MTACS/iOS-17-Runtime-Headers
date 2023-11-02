
@interface BMScreenTimeChildState : BMEventBase <BMStoreData> {
    NSString * _eventID;
    bool  _hasRaw_signalDate;
    bool  _hasStarting;
    double  _raw_signalDate;
    bool  _starting;
    int  _state;
    NSString * _userDSID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *signalDate;
@property (nonatomic, readonly) bool starting;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userDSID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventID;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 eventID:(id)arg2 signalDate:(id)arg3 userDSID:(id)arg4 state:(int)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (id)signalDate;
- (bool)starting;
- (int)state;
- (id)userDSID;
- (void)writeTo:(id)arg1;

@end

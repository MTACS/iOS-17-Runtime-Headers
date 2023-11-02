
@interface BMUserFocusSleepMode : BMEventBase <BMStoreData> {
    int  _changeReason;
    bool  _hasRaw_expectedEndDate;
    double  _raw_expectedEndDate;
    int  _state;
}

@property (nonatomic, readonly) int changeReason;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expectedEndDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (int)changeReason;
- (unsigned int)dataVersion;
- (id)description;
- (id)expectedEndDate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithState:(int)arg1 changeReason:(int)arg2 expectedEndDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (int)state;
- (void)writeTo:(id)arg1;

@end


@interface BMHealthWorkout : BMEventBase <BMStoreData> {
    NSString * _activityType;
    NSString * _activityUUID;
    int  _eventType;
    bool  _hasIsFirstPartyDonation;
    bool  _hasIsIndoor;
    bool  _hasIsUpdate;
    bool  _isFirstPartyDonation;
    bool  _isIndoor;
    bool  _isUpdate;
}

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityUUID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int eventType;
@property (nonatomic) bool hasIsFirstPartyDonation;
@property (nonatomic) bool hasIsIndoor;
@property (nonatomic) bool hasIsUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstPartyDonation;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) bool isUpdate;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)activityType;
- (id)activityUUID;
- (unsigned int)dataVersion;
- (id)description;
- (int)eventType;
- (bool)hasIsFirstPartyDonation;
- (bool)hasIsIndoor;
- (bool)hasIsUpdate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsFirstPartyDonation:(id)arg1 isIndoor:(id)arg2 activityType:(id)arg3 eventType:(int)arg4 activityUUID:(id)arg5 isUpdate:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyDonation;
- (bool)isIndoor;
- (bool)isUpdate;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIsFirstPartyDonation:(bool)arg1;
- (void)setHasIsIndoor:(bool)arg1;
- (void)setHasIsUpdate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end


@interface BMMediaRoute : BMEventBase <BMStoreData> {
    NSString * _groupLeaderOutputDeviceID;
    bool  _hasIsRemoteControl;
    bool  _isRemoteControl;
    NSArray * _outputDevices;
    int  _routeType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupLeaderOutputDeviceID;
@property (nonatomic) bool hasIsRemoteControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRemoteControl;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) int routeType;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_outputDevicesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)groupLeaderOutputDeviceID;
- (bool)hasIsRemoteControl;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithRouteType:(int)arg1 groupLeaderOutputDeviceID:(id)arg2 isRemoteControl:(id)arg3 outputDevices:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteControl;
- (id)jsonDictionary;
- (id)outputDevices;
- (int)routeType;
- (id)serialize;
- (void)setHasIsRemoteControl:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

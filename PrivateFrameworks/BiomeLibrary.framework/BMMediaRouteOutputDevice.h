
@interface BMMediaRouteOutputDevice : BMEventBase <BMStoreData> {
    int  _clusterType;
    NSArray * _flattenedClusterLeafMembers;
    NSString * _outputDeviceID;
    int  _subType;
    int  _type;
}

@property (nonatomic, readonly) int clusterType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *flattenedClusterLeafMembers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *outputDeviceID;
@property (nonatomic, readonly) int subType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_flattenedClusterLeafMembersJSONArray;
- (int)clusterType;
- (unsigned int)dataVersion;
- (id)description;
- (id)flattenedClusterLeafMembers;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithOutputDeviceID:(id)arg1 type:(int)arg2 subType:(int)arg3 clusterType:(int)arg4 flattenedClusterLeafMembers:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)outputDeviceID;
- (id)serialize;
- (int)subType;
- (int)type;
- (void)writeTo:(id)arg1;

@end

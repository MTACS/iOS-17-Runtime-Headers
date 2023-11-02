
@interface HMAudioAnalysisAggregateEventBulletin : HMEEvent <HMFLogging, HMFObject> {
    NSArray * _bulletins;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSArray *bulletins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)decodeBulletinsFromEvent:(id)arg1 error:(id*)arg2;
+ (id)logCategory;
+ (id)shortDescription;
+ (id)topicWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)bulletins;
- (id)bulletinsByAddingOrReplacingBulletin:(id)arg1;
- (bool)checkIfBulletinExists:(id)arg1;
- (id)description;
- (id)encodedData;
- (id)initWithBulletins:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;
- (id)privateDescription;
- (id)shortDescription;

@end

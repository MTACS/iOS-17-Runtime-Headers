
@interface _MKFTimePeriodBulletinCondition : _MKFBulletinCondition <MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions>

@property (nonatomic, readonly, retain) <MKFBulletinRegistration> *bulletinRegistration;
@property (nonatomic, readonly, copy) MKFTimePeriodBulletinConditionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MKFBulletinTimeSpecification> *endElement;
@property (nonatomic, retain) _MKFBulletinTimeSpecification *endElement;
@property (readonly) unsigned long long hash;
@property (readonly) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) _MKFBulletinTimeSpecification *startElement;
@property (nonatomic, retain) <MKFBulletinTimeSpecification> *startElement;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addEndElementObject:(id)arg1;
- (void)addStartElementObject:(id)arg1;
- (id)castIfTimePeriodBulletinCondition;
- (id)createEndElementRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;
- (id)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;
- (id)createStartElementRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;
- (id)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;
- (id)databaseID;
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;
- (id)home;
- (id)materializeOrCreateEndElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateStartElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (void)removeEndElementObject:(id)arg1;
- (void)removeStartElementObject:(id)arg1;

@end

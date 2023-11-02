
@protocol MKFTimePeriodBulletinCondition <MKFBulletinCondition, MKFTimePeriodBulletinConditionPublicExtensions>

@required

- (void)addEndElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (void)addStartElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (<MKFBulletinTimeSpecification> *)createEndElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFSunriseSunsetTimeSpecification> *)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFTimeOfDayTimeSpecification> *)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFBulletinTimeSpecification> *)createStartElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (<MKFSunriseSunsetTimeSpecification> *)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFTimeOfDayTimeSpecification> *)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (MKFTimePeriodBulletinConditionDatabaseID *)databaseID;
- (<MKFBulletinTimeSpecification> *)endElement;
- (<MKFSunriseSunsetTimeSpecification> *)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFTimeOfDayTimeSpecification> *)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFSunriseSunsetTimeSpecification> *)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFTimeOfDayTimeSpecification> *)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (<MKFHome> *)home;
- (<MKFBulletinTimeSpecification> *)materializeOrCreateEndElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFSunriseSunsetTimeSpecification> *)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFTimeOfDayTimeSpecification> *)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFBulletinTimeSpecification> *)materializeOrCreateStartElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(bool*)arg3;
- (<MKFSunriseSunsetTimeSpecification> *)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFTimeOfDayTimeSpecification> *)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (void)removeEndElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (void)removeStartElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (void)setEndElement:(id <MKFBulletinTimeSpecification>)arg1;
- (void)setStartElement:(id <MKFBulletinTimeSpecification>)arg1;
- (<MKFBulletinTimeSpecification> *)startElement;

@end

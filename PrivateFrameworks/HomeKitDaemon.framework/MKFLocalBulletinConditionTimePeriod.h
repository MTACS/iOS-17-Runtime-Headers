
@interface MKFLocalBulletinConditionTimePeriod : MKFLocalBulletinCondition

@property (nonatomic, retain) MKFLocalElementTimePeriod *endElement;
@property (nonatomic, retain) MKFLocalElementTimePeriod *startElement;

+ (id)fetchRequest;

@end

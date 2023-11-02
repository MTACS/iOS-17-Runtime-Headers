
@interface MetricEntryMO : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) NSData *eventMessage;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1;
+ (unsigned long long)metricEntryCount:(unsigned long long)arg1 moc:(id)arg2;

@end

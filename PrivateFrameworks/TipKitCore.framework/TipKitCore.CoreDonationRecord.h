
@interface TipKitCore.CoreDonationRecord : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDictionary *donationInfo;
@property (nonatomic, retain) _TtC10TipKitCore15CoreEventRecord *event;

+ (id)attributes;
+ (id)fetchDonationValueWithRule:(id)arg1 event:(id)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)fetchDonationsWithEventID:(id)arg1 context:(id)arg2;
+ (id)relationships;

- (id)donationValueFor:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

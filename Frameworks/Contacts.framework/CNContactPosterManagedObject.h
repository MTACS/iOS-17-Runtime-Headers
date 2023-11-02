
@interface CNContactPosterManagedObject : NSManagedObject

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) bool ignoredForRevert;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, retain) CNContactImageManagedObject *pairedImage;
@property (nonatomic, retain) NSData *posterData;
@property (nonatomic, retain) NSData *visualFingerprintData;

+ (id /* block */)managedObjectToContactPosterTransform;

- (void)setupWithContactPoster:(id)arg1 contactIdentifier:(id)arg2;
- (void)setupWithContactPoster:(id)arg1 pairedImage:(id)arg2 contactIdentifier:(id)arg3;
- (void)updateWithContactPoster:(id)arg1;
- (void)updateWithContactPoster:(id)arg1 pairedImage:(id)arg2;

@end


@interface CNContactImageManagedObject : NSManagedObject

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *cropRectString;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) bool ignoredForRevert;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, retain) CNContactPosterManagedObject *pairedPoster;
@property (nonatomic, retain) NSData *poseConfigurationData;
@property (nonatomic, retain) NSNumber *source;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, retain) NSString *variant;
@property (nonatomic, retain) NSData *visualFingerprintData;

+ (id /* block */)managedObjectToContactImageTransform;

- (id)cropRectStringFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupWithContactImage:(id)arg1 contactIdentifier:(id)arg2;
- (void)setupWithContactImage:(id)arg1 pairedPoster:(id)arg2 contactIdentifier:(id)arg3;
- (void)updateWithContactImage:(id)arg1;
- (void)updateWithContactImage:(id)arg1 pairedPoster:(id)arg2;

@end

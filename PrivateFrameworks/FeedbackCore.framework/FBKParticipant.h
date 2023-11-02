
@interface FBKParticipant : FBKManagedFeedbackObject

@property (nonatomic, retain) NSSet *assignedFeedback;
@property (nonatomic, readonly) UIImage *contactImage;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, retain) NSSet *followups;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, retain) NSSet *originatedFeedback;
@property (nonatomic, copy) NSNumber *remoteID;
@property (nonatomic, retain) NSSet *teams;

+ (id)currentParticipantForContext:(id)arg1;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)keyPathsForValuesAffectingFullName;
+ (id)sortDescriptors;

- (id)fullName;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end

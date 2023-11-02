
@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic, copy) NSURL *contactIdentifier;
@property (nonatomic, copy) NSString *internalGUID;
@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSString *mobileSpace;
@property (nonatomic, copy) NSString *timing;

+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)contactIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)internalGUID;
- (id)location;
- (id)mobileSpace;
- (void)setContactIdentifier:(id)arg1;
- (void)setInternalGUID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMobileSpace:(id)arg1;
- (void)setTiming:(id)arg1;
- (id)timing;

@end

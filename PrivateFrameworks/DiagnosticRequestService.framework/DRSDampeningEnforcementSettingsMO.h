
@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (nonatomic) bool enforcesResourceCap;
@property (nonatomic) bool enforcesResourceDownsampling;
@property (nonatomic) bool enforcesResourceHysteresis;
@property (nonatomic) bool enforcesSignatureCap;
@property (nonatomic) bool enforcesSignatureDownsampling;
@property (nonatomic) bool enforcesSignatureHysteresis;
@property (nonatomic) bool enforcesTotalCap;
@property (nonatomic, retain) DRSDampeningManagerMO *parentDampeningManager;

+ (id)fetchRequest;

@end

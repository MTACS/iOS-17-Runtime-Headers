
@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) NSData *serializedSuggestions;
@property (nonatomic) int shortcutAvailabilityOptions;

+ (id)fetchRequest;

- (id)descriptor;

@end


@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateLastModified;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool isMarkedAsDeleted;
@property (nonatomic, retain) NSData *keyImageData;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, retain) NSData *serializedWorkflowData;
@property (nonatomic, copy) NSString *shortcutDescription;
@property (nonatomic, copy) NSString *shortcutName;
@property (nonatomic, retain) NSSet *syncStates;

+ (id)fetchRequest;

@end

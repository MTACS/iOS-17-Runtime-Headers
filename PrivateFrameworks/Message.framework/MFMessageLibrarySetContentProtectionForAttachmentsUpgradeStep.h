
@interface MFMessageLibrarySetContentProtectionForAttachmentsUpgradeStep : NSObject {
    NSURL * _baseAttachmentsDirectory;
}

@property (nonatomic, readonly) NSURL *baseAttachmentsDirectory;

+ (id)log;

- (void).cxx_destruct;
- (id)baseAttachmentsDirectory;
- (id)initWithBaseAttachmentsDirectory:(id)arg1;
- (bool)performMigrationStep;

@end

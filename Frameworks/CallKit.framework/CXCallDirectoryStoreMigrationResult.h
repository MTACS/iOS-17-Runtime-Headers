
@interface CXCallDirectoryStoreMigrationResult : NSObject {
    long long  _endingSchemaVersion;
    bool  _requiresExtensionDisablement;
    bool  _requiresExtensionSynchronization;
    long long  _startingSchemaVersion;
}

@property (nonatomic) long long endingSchemaVersion;
@property (nonatomic) bool requiresExtensionDisablement;
@property (nonatomic) bool requiresExtensionSynchronization;
@property (nonatomic) long long startingSchemaVersion;

- (long long)endingSchemaVersion;
- (bool)requiresExtensionDisablement;
- (bool)requiresExtensionSynchronization;
- (void)setEndingSchemaVersion:(long long)arg1;
- (void)setRequiresExtensionDisablement:(bool)arg1;
- (void)setRequiresExtensionSynchronization:(bool)arg1;
- (void)setStartingSchemaVersion:(long long)arg1;
- (long long)startingSchemaVersion;

@end

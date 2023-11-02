
@interface LNSystemProtocol : NSObject <NSSecureCoding> {
    NSString * _defaultActionIdentifier;
    NSString * _identifier;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly) NSString *defaultActionIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly) NSString *typeName;

+ (id)allProtocols;
+ (id)allProtocolsByIdentifier;
+ (id)audioRecordingProtocol;
+ (id)audioStartingProtocol;
+ (id)cameraCaptureProtocol;
+ (id)cancelProtocol;
+ (id)changeBinarySettingSystemProtocol;
+ (id)closeEntityProtocol;
+ (id)conditionallyEnabledProtocol;
+ (id)copyEntityProtocol;
+ (id)copySystemProtocol;
+ (id)createEntitySystemProtocol;
+ (id)cutEntityProtocol;
+ (id)cutSystemProtocol;
+ (id)deleteEntitySystemProtocol;
+ (id)duplicateEntitySystemProtocol;
+ (id)enterMarkupProtocol;
+ (id)exitMarkupProtocol;
+ (id)favoriteEntityProtocol;
+ (id)favoriteProtocol;
+ (id)focusConfigurationProtocol;
+ (id)foregroundContinuableProtocol;
+ (id)moveSpatialProtocol;
+ (id)navigateSequentiallyProtocol;
+ (id)ofKind:(long long)arg1;
+ (id)openEntitySystemProtocol;
+ (id)parametersForProtocolWithIdentifier:(id)arg1;
+ (id)pasteSystemProtocol;
+ (id)pauseWorkoutProtocol;
+ (id)previewEntityProtocol;
+ (id)protocolOrNilWithIdentifier:(id)arg1;
+ (id)protocolWithIdentifier:(id)arg1;
+ (id)putEntityInContainerProtocol;
+ (id)requiresMDMChecksProtocol;
+ (id)resizeProtocol;
+ (id)resumeWorkoutProtocol;
+ (id)saveEntitySystemProtocol;
+ (id)scrollProtocol;
+ (id)searchSystemProtocol;
+ (id)sendMailProtocol;
+ (id)sessionStartingProtocol;
+ (id)setMailMessageIsReadProtocol;
+ (id)staccatoLongPressProtocol;
+ (id)startDiveProtocol;
+ (id)startWorkoutProtocol;
+ (id)stingProtocol;
+ (bool)supportsSecureCoding;
+ (id)systemProtocolKindsByIdentifier;
+ (id)undoSystemProtocol;
+ (id)widgetConfigurationProtocol;
+ (id)zoomProtocol;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultActionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (id)parameters;
- (id)typeName;

@end

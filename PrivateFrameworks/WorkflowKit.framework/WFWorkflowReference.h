
@interface WFWorkflowReference : WFWorkflowDescriptor <NSItemProviderReading, NSItemProviderWriting, WFNaming> {
    unsigned long long  _actionCount;
    NSString * _actionsDescription;
    NSDate * _creationDate;
    bool  _disabledOnLockScreen;
    bool  _hasShortcutInputVariables;
    bool  _hiddenFromLibraryAndSync;
    WFWorkflowIcon * _icon;
    bool  _isDeleted;
    NSDate * _lastRunDate;
    NSDate * _modificationDate;
    NSData * _remoteQuarantineHash;
    long long  _remoteQuarantineStatus;
    NSString * _source;
    NSString * _subtitle;
    long long  _syncHash;
}

@property (nonatomic, readonly) unsigned long long actionCount;
@property (nonatomic, readonly, copy) NSString *actionsDescription;
@property (nonatomic, readonly) WFIcon *attributionIcon;
@property (nonatomic, readonly) NSString *attributionTitle;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabledOnLockScreen;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displaySubtitle;
@property (nonatomic, readonly) bool hasShortcutInputVariables;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hiddenFromLibraryAndSync;
@property (nonatomic, readonly, copy) WFWorkflowIcon *icon;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly) NSDate *lastRunDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSData *remoteQuarantineHash;
@property (nonatomic, readonly) long long remoteQuarantineStatus;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncHash;
@property (nonatomic, readonly) NSUserActivity *userActivityForViewing;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (unsigned long long)actionCount;
- (id)actionsDescription;
- (id)attributionIcon;
- (id)attributionIconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rounded:(bool)arg3;
- (id)attributionTitle;
- (id)creationDate;
- (bool)disabledOnLockScreen;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURLForRunningWithSource:(id)arg1;
- (bool)hasShortcutInputVariables;
- (unsigned long long)hash;
- (bool)hiddenFromLibraryAndSync;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(long long)arg3 glyphCharacter:(unsigned short)arg4 associatedAppBundleIdentifier:(id)arg5 subtitle:(id)arg6 actionsDescription:(id)arg7 actionCount:(unsigned long long)arg8 syncHash:(long long)arg9 isDeleted:(bool)arg10 hiddenFromLibraryAndSync:(bool)arg11 creationDate:(id)arg12 modificationDate:(id)arg13 lastRunDate:(id)arg14 remoteQuarantineStatus:(long long)arg15 remoteQuarantineHash:(id)arg16 hasShortcutInputVariables:(bool)arg17 disabledOnLockScreen:(bool)arg18 source:(id)arg19;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (id)lastRunDate;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)modificationDate;
- (id)remoteQuarantineHash;
- (long long)remoteQuarantineStatus;
- (void)setSource:(id)arg1;
- (id)source;
- (id)speakableString;
- (id)subtitle;
- (long long)syncHash;
- (id)userActivityForViewing;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)searchableItemRepresentationWithIconDrawerContext:(id)arg1;
- (unsigned long long)spotlightHash;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)displayName;
- (id)displaySubtitle;

@end

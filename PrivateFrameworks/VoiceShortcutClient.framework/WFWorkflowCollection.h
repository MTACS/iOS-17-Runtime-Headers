
@interface WFWorkflowCollection : WFDatabaseObjectDescriptor {
    bool  _deleted;
    bool  _folder;
    unsigned short  _glyphCharacter;
    NSString * _name;
}

@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displaySubtitle;
@property (getter=isFolder, nonatomic, readonly) bool folder;
@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *systemIconName;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isFolder:(bool)arg2 name:(id)arg3 glyphCharacter:(unsigned short)arg4 isDeleted:(bool)arg5;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isFolder;
- (id)name;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (unsigned short)defaultGlyphCharacter;
+ (id)defaultName;

- (id)systemIconName;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)displayName;
- (id)displaySubtitle;

@end

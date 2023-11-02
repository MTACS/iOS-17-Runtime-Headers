
@interface SFRunVoiceShortcutCommand : SFCommand <NSCopying, NSSecureCoding, SFRunVoiceShortcutCommand> {
    NSString * _applicationBundleIdentifier;
    NSString * _voiceShortcutIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *voiceShortcutIdentifier;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setVoiceShortcutIdentifier:(id)arg1;
- (id)voiceShortcutIdentifier;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end

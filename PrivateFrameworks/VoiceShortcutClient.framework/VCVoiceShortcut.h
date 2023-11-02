
@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding> {
    NSString * _associatedAppBundleIdentifier;
    NSDate * _dateCreated;
    NSDate * _dateLastModified;
    NSString * _identifier;
    INImage * _keyImage;
    NSDate * _lastRunDate;
    NSString * _phrase;
    INShortcut * _shortcut;
    NSString * _shortcutDescription;
    NSString * _shortcutName;
}

@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *dateLastModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBeenModified;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) INImage *keyImage;
@property (nonatomic, readonly) NSDate *lastRunDate;
@property (nonatomic, readonly, copy) NSString *phrase;
@property (nonatomic, readonly) INShortcut *shortcut;
@property (nonatomic, readonly, copy) NSString *shortcutDescription;
@property (nonatomic, readonly, copy) NSString *shortcutName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflow *workflow;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)dateLastModified;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenModified;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 lastRunDate:(id)arg8 shortcut:(id)arg9 keyImageData:(id)arg10 error:(id*)arg11;
- (bool)isEqual:(id)arg1;
- (id)keyImage;
- (id)lastRunDate;
- (id)phrase;
- (id)shortcut;
- (id)shortcutDescription;
- (id)shortcutName;
- (id)workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)workflow;

@end

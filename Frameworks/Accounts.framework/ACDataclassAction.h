
@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {
    NSArray * _affectedContainers;
    bool  _isDestructive;
    long long  _type;
    NSString * _undoAlertMessage;
    NSString * _undoAlertTitle;
}

@property (getter=_isError, readonly) bool _error;
@property (nonatomic, readonly) NSArray *affectedContainers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDestructive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *undoAlertMessage;
@property (nonatomic, retain) NSString *undoAlertTitle;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)_actionForError:(id)arg1;
+ (id)actionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1;
+ (id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (bool)_isError;
- (id)affectedContainers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destructivity:(bool)arg2 affectedContainers:(id)arg3;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (void)setUndoAlertMessage:(id)arg1;
- (void)setUndoAlertTitle:(id)arg1;
- (long long)type;
- (id)undoAlertMessage;
- (id)undoAlertTitle;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (bool)isSafeForAutoEnablement;

@end

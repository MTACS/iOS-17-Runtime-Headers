
@interface CHUISWidgetLaunchRequest : NSObject <BSXPCSecureCoding, NSCopying> {
    NSString * _effectiveContainerBundleIdentifier;
    bool  _isEntitledToOpenSystemProcesses;
    BSAction * _launchAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *effectiveContainerBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEntitledToOpenSystemProcesses;
@property (nonatomic, readonly) BSAction *launchAction;
@property (nonatomic, readonly) NSUserActivity *newUserActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_stateDumpDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveContainerBundleIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithLaunchAction:(id)arg1 effectiveContainerBundleIdentifier:(id)arg2 isEntitledToOpenSystemProcesses:(bool)arg3;
- (bool)isEntitledToOpenSystemProcesses;
- (bool)isEqual:(id)arg1;
- (id)launchAction;
- (id)newUserActivity;
- (id)url;
- (id)userActivityData;

@end

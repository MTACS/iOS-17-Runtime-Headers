
@interface SBSFocusModesHomeScreenSnapshot : NSObject <BSXPCSecureCoding> {
    NSString * _focusModeIdentifier;
    NSString * _listIdentifier;
    BSMachPortSendRight * _machPortSendRight;
    bool  _wantsListVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *focusModeIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *listIdentifier;
@property (nonatomic, retain) BSMachPortSendRight *machPortSendRight;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsListVisible;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)focusModeIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithListIdentifier:(id)arg1 focusModeIdentifier:(id)arg2 machPortSendRight:(id)arg3;
- (id)listIdentifier;
- (id)machPortSendRight;
- (void)setFocusModeIdentifier:(id)arg1;
- (void)setListIdentifier:(id)arg1;
- (void)setMachPortSendRight:(id)arg1;
- (void)setWantsListVisible:(bool)arg1;
- (bool)wantsListVisible;

@end

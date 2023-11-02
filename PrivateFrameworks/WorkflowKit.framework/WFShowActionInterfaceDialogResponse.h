
@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding> {
    NSXPCListenerEndpoint * _listenerEndpoint;
    bool  _unsupported;
    NSString * _userInterfaceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;
@property (getter=isUnsupported, nonatomic, readonly) bool unsupported;
@property (nonatomic, readonly) NSString *userInterfaceType;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCancelled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 userInterfaceType:(id)arg2;
- (id)initWithUnsupported:(bool)arg1;
- (bool)isUnsupported;
- (id)listenerEndpoint;
- (bool)shouldDismissDialogInTransientMode;
- (id)userInterfaceType;

@end

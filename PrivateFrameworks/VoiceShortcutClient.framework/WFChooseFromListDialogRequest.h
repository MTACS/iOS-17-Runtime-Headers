
@interface WFChooseFromListDialogRequest : WFDialogRequest <WFDialogRequestViewControllerSupport> {
    bool  _allowsMultipleSelection;
    WFDialogButton * _cancelButton;
    NSXPCListenerEndpoint * _dataStoreEndpoint;
    WFListDisplayConfiguration * _displayConfiguration;
    WFDialogButton * _doneButton;
    NSArray * _items;
    NSString * _message;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (nonatomic, readonly) <WFDialogListItemStore> *dataStore;
@property (nonatomic, retain) NSXPCListenerEndpoint *dataStoreEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFListDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (nonatomic, readonly, copy) NSString *emptyStateMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsMultipleSelection;
- (id)cancelButton;
- (id)dataStore;
- (id)dataStoreEndpoint;
- (id)displayConfiguration;
- (id)doneButton;
- (id)emptyStateMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 allowsMultipleSelection:(bool)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;
- (id)items;
- (id)message;
- (id)requestByCompactingRequest;
- (void)setDataStoreEndpoint:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end

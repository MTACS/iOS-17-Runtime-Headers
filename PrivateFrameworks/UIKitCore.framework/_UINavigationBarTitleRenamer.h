
@interface _UINavigationBarTitleRenamer : NSObject {
    <_UINavigationBarTitleRenamerDelegate> * _delegate;
    struct { 
        unsigned int allowsMultipleSessions : 1; 
    }  _flags;
    NSMutableSet * _trackedSessions;
}

@property (nonatomic) <_UINavigationBarTitleRenamerDelegate> *delegate;
@property (nonatomic, readonly) NSMutableSet *trackedSessions;

+ (id)renameServer;

- (void).cxx_destruct;
- (void)_session:(id)arg1 fileRenameDidEnd:(id)arg2;
- (void)_session:(id)arg1 fileRenameDidFail:(id)arg2;
- (bool)_session:(id)arg1 textFieldShouldEndRenamingWithTitle:(id)arg2;
- (id)_session:(id)arg1 textFieldWillBeginRenamingWithTitle:(id)arg2 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)_sessionDidCancel:(id)arg1;
- (void)_sessionTextFieldDidEndEditing:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endSession:(id)arg1;
- (id)init;
- (void)sceneWillDeactivateNotification:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startSession:(id)arg1;
- (id)trackedSessions;

@end

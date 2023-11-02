
@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget> {
    <PUEditingExtensionUndoButtonHost> * _buttonHost;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly) <PUEditingExtensionUndoButtonHost> *buttonHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)_registerForUndoManagerNotifications:(id)arg1;
- (void)_unregisterForUndoManagerNotifications:(id)arg1;
- (void)_updateButtonState;
- (id)buttonHost;
- (id)initWithButtonHost:(id)arg1;
- (void)performRedo;
- (void)performUndo;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;

@end

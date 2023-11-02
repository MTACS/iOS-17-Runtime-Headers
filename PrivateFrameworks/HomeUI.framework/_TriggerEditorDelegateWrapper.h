
@interface _TriggerEditorDelegateWrapper : NSObject <HUTriggerEditorDelegate> {
    <HUTriggerEditorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)triggerEditor:(id)arg1 didCommitTriggerBuilder:(id)arg2 withError:(id)arg3;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;

@end

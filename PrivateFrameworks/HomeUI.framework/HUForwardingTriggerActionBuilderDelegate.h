
@interface HUForwardingTriggerActionBuilderDelegate : NSObject <HUTriggerEditorDelegate> {
    <HUTriggerActionBuilderEditorDelegate> * _triggerActionBuilderEditorDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <HUTriggerActionBuilderEditorDelegate> *triggerActionBuilderEditorDelegate;

- (void).cxx_destruct;
- (id)initWithTriggerActionBuilderEditorDelegate:(id)arg1;
- (void)setTriggerActionBuilderEditorDelegate:(id)arg1;
- (id)triggerActionBuilderEditorDelegate;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;

@end

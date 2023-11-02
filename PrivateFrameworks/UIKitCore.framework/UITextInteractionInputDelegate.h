
@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate> {
    UITextInteraction * _rootInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITextInteraction *rootInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)rootInteraction;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setRootInteraction:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;

@end

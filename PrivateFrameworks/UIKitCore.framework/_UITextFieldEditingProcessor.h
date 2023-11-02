
@interface _UITextFieldEditingProcessor : NSObject {
    <_UITextFieldEditingProcessorDelegate> * _delegate;
}

@property (nonatomic) <_UITextFieldEditingProcessorDelegate> *delegate;

- (void).cxx_destruct;
- (id)beginEditingWithTextStorage:(id)arg1;
- (id)delegate;
- (id)overridingEditingAttributesForAttributes:(id)arg1 withOverrides:(id)arg2;
- (void)setDelegate:(id)arg1;

@end

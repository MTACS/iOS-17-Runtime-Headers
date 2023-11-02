
@interface _UITextAttachmentInteractionHandler : _UITextItemInteractionHandler {
    NSTextAttachment * _textAttachment;
}

@property (nonatomic, readonly) NSTextAttachment *textAttachment;

- (void).cxx_destruct;
- (bool)_canPresentMenuWithoutPrimaryAction;
- (id)_defaultMenuForInteractableItem;
- (id)initWithAttachmentItem:(id)arg1 textContentView:(id)arg2;
- (id)textAttachment;

@end

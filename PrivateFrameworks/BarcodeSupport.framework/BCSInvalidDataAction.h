
@interface BCSInvalidDataAction : BCSAction

- (id)actionIcon;
- (id)actionPickerItems;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (bool)isInvalidDataAction;
- (id)localizedDefaultActionDescription;
- (void)performDefaultAction;

@end

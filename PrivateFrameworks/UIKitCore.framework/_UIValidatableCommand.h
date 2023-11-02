
@interface _UIValidatableCommand : UICommand {
    UICommandAlternate * _alternate;
    UICommand * _command;
}

- (void).cxx_destruct;
- (SEL)action;
- (id)alternates;
- (id)init;
- (id)propertyList;
- (void)useCommand:(id)arg1 alternate:(id)arg2;

@end

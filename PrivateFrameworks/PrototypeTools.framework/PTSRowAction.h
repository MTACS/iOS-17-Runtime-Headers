
@interface PTSRowAction : PTRowAction {
    bool  _deselectRowOnSuccess;
}

@property bool deselectRowOnSuccess;

- (bool)deselectRowOnSuccess;
- (void)setDeselectRowOnSuccess:(bool)arg1;

@end

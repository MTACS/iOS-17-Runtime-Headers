
@interface EMFocus : NSObject {
    NSSet * _focusedAccountIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *focusedAccountIdentifiers;

- (void).cxx_destruct;
- (id)focusedAccountIdentifiers;
- (id)initWithFocusedAccountIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFocusedIdentifier:(id)arg1;

@end

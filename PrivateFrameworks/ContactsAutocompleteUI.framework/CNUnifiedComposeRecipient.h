
@interface CNUnifiedComposeRecipient : CNComposeRecipient {
    NSArray * _children;
}

- (void).cxx_destruct;
- (id)children;
- (id)initWithChildren:(id)arg1 defaultChild:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)showsChevronButton;
- (id)sortedChildren;

@end


@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray * _children;
}

- (void).cxx_destruct;
- (void)_populateSortedChildren;
- (void)addRecipientToPasteboard:(id)arg1;
- (id)address;
- (id)children;
- (id)childrenWithCompleteMatches;
- (id)commentedAddress;
- (id)completelyMatchedAttributedStrings;
- (id)compositeName;
- (id)displayString;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (id)label;
- (id)placeholderName;
- (bool)showsChevronButton;
- (id)sortedChildren;
- (id)unlocalizedLabel;
- (bool)wasCompleteMatch;

@end

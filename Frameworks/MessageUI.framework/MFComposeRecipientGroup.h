
@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray * _children;
}

- (void).cxx_destruct;
- (void)_populateSortedChildren;
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
- (bool)isRemovableFromSearchResults;
- (id)label;
- (id)placeholderName;
- (int)property;
- (void*)record;
- (int)recordID;
- (id)sortedChildren;
- (id)unlocalizedLabel;
- (bool)wasCompleteMatch;

@end

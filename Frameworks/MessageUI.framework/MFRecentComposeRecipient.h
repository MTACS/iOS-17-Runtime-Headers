
@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact * _recent;
}

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentContact:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isRemovableFromSearchResults;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)recentContact;

@end

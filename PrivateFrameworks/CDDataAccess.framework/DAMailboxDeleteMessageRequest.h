
@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (id)description;
- (unsigned long long)hash;
- (id)initRequestWithMessageID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

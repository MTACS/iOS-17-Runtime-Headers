
@interface SANoteDelete : SADomainCommand

@property (nonatomic, copy) NSURL *identifier;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;

@end

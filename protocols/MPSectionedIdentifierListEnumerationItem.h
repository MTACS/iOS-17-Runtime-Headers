
@protocol MPSectionedIdentifierListEnumerationItem <MPSectionedIdentifierListEnumerationResult>

@required

- (bool)isRemoved;
- (NSString *)itemIdentifier;
- (NSString *)sectionIdentifier;

@end

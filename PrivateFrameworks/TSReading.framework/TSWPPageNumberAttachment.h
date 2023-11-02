
@interface TSWPPageNumberAttachment : TSWPNumberAttachment

- (bool)changesWithPageNumber;
- (int)elementKind;
- (bool)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;

@end


@protocol CRKASMUserDirectory <NSObject>

@required

- (<CRKASMUserDirectoryIterator> *)iteratorForSearchString:(NSString *)arg1 sortingGivenNameFirst:(bool)arg2 pageSize:(long long)arg3;

@end

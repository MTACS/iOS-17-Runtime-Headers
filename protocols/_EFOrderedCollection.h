
@protocol _EFOrderedCollection <NSObject>

@required

- (unsigned long long)count;
- (NSArray *)ef_subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end

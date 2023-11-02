
@protocol BMRow

@required

- (long long)columnCount;
- (id)valueAtIdx:(unsigned long long)arg1;
- (NSArray *)values;

@end

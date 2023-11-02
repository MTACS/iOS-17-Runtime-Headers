
@protocol WFArrayParameterEventObserver <WFParameterEventObserver>

@optional

- (void)arrayParameter:(void *)arg1 confirmDeletionOfItemAtIndex:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 8: WFArrayParameter *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasDeletedAtIndex:(unsigned long long)arg2;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasInserted:(WFPropertyListParameterValue *)arg2 atIndex:(unsigned long long)arg3;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)arrayParameter:(WFArrayParameter *)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(WFPropertyListParameterValue *)arg3;

@end


@interface _NSMetadataQueryResultArray : NSArray {
    id  _query;
    int  _rc;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

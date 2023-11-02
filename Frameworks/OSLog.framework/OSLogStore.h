
@interface OSLogStore : NSObject {
    int  _constraint;
    OSLogEventSource * _source;
}

+ (id)storeWithScope:(long long)arg1 error:(id*)arg2;
+ (id)storeWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_constrainedEntriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
- (id)entriesEnumeratorAndReturnError:(id*)arg1;
- (id)entriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initForFactory;
- (id)positionWithDate:(id)arg1;
- (id)positionWithTimeIntervalSinceEnd:(double)arg1;
- (id)positionWithTimeIntervalSinceLatestBoot:(double)arg1;

@end

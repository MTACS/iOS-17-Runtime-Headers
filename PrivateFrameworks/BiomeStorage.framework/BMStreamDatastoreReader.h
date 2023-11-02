
@interface BMStreamDatastoreReader : NSObject {
    BMStreamDatastore * _inner;
}

@property (nonatomic, readonly) BMStreamDatastore *inner;
@property (nonatomic, readonly) bool isDataAccessible;

- (void).cxx_destruct;
- (Class)eventBodyClass;
- (id)fetchEventsFrom:(double)arg1 to:(double)arg2;
- (id)fetchEventsFrom:(double)arg1 to:(double)arg2 options:(unsigned long long)arg3;
- (id)initWithStream:(id)arg1 config:(id)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2 eventDataClass:(Class)arg3 useCase:(id)arg4;
- (id)inner;
- (bool)isDataAccessible;
- (id)newEnumeratorFromBookmark:(id)arg1;
- (id)newEnumeratorFromBookmark:(id)arg1 options:(unsigned long long)arg2;
- (id)newEnumeratorFromStartTime:(double)arg1;
- (id)newEnumeratorFromStartTime:(double)arg1 endTime:(double)arg2 maxEvents:(unsigned long long)arg3 lastN:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)newEnumeratorFromStartTime:(double)arg1 endTime:(double)arg2 maxEvents:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)newEnumeratorFromStartTime:(double)arg1 options:(unsigned long long)arg2;
- (id)streamIdentifier;

@end

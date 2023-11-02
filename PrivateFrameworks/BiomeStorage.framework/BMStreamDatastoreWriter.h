
@interface BMStreamDatastoreWriter : NSObject <BMStreamDatastoreWriting> {
    BMStreamDatastore * _inner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataAccessible;
@property (readonly) Class superclass;

+ (id)outOfProcessWriterForStream:(id)arg1 user:(unsigned int)arg2 eventDataClass:(Class)arg3;

- (void).cxx_destruct;
- (bool)_writeEventData:(id)arg1 dataVersion:(unsigned int)arg2 timestamp:(double)arg3 outBookmark:(id*)arg4;
- (Class)eventBodyClass;
- (id)initWithStream:(id)arg1 config:(id)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2 eventDataClass:(Class)arg3;
- (bool)isDataAccessible;
- (id)streamIdentifier;
- (void)syncMappedFiles;
- (bool)writeEventBodyClass:(Class)arg1;
- (bool)writeEventWithEventBody:(id)arg1;
- (bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2;
- (bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 outEventSize:(unsigned long long*)arg3;

@end

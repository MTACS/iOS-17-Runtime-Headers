
@interface SHJSONLFileWriter : NSObject {
    NSURL * _destination;
    <SHDataStream> * _outputStream;
}

@property (nonatomic, readonly) NSURL *destination;
@property (nonatomic, readonly) <SHDataStream> *outputStream;

+ (long long)dataCompressionFromAlgorithm:(int)arg1;
+ (id)dataForJSONObject:(id)arg1 error:(id*)arg2;
+ (id)dataForJSONObjects:(id)arg1 compression:(int)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;
- (id)destination;
- (id)initWithDestination:(id)arg1 compression:(int)arg2;
- (void)linkDataStream:(id)arg1;
- (id)outputStream;
- (id)streamForWritingToURL:(id)arg1 withCompression:(int)arg2;
- (bool)writeObject:(id)arg1 error:(id*)arg2;

@end

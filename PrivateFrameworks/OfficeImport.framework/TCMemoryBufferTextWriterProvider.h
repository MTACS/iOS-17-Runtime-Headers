
@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider {
    NSMutableData * _memoryBuffer;
}

@property (nonatomic, readonly, retain) NSMutableData *memoryBuffer;

- (void).cxx_destruct;
- (id)initWithMemoryBuffer:(id)arg1;
- (id)memoryBuffer;
- (bool)setUp;

@end


@interface cRowsetProperties : NSObject {
    unsigned int  _booleanOptions;
    unsigned int  _cmdTimeout;
    unsigned int  _maxOpenRows;
    unsigned int  _maxResult;
    unsigned int  _memoryUsage;
}

@property unsigned int booleanOptions;
@property unsigned int cmdTimeout;
@property unsigned int maxOpenRows;
@property unsigned int maxResult;
@property unsigned int memoryUsage;

- (unsigned int)booleanOptions;
- (unsigned int)cmdTimeout;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)init;
- (unsigned int)maxOpenRows;
- (unsigned int)maxResult;
- (unsigned int)memoryUsage;
- (void)setBooleanOptions:(unsigned int)arg1;
- (void)setCmdTimeout:(unsigned int)arg1;
- (void)setMaxOpenRows:(unsigned int)arg1;
- (void)setMaxResult:(unsigned int)arg1;
- (void)setMemoryUsage:(unsigned int)arg1;

@end

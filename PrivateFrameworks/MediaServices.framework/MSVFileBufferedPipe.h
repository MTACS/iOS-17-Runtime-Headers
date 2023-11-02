
@interface MSVFileBufferedPipe : NSObject {
    unsigned int  _dataPendingOffset;
    NSData * _dataPendingWrite;
    NSFileHandle * _fileHandleForReading;
    NSFileHandle * _fileHandleForWriting;
    bool  _hasBufferedData;
    NSPipe * _inputPipe;
    NSPipe * _outputPipe;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileHandle * _readBufferFileHandle;
    NSObject<OS_dispatch_source> * _readSource;
    bool  _readSourceClosed;
    bool  _readyForData;
    NSMutableSet * _uniqueWriteErrors;
    NSFileHandle * _writeBufferFileHandle;
    NSObject<OS_dispatch_source> * _writeSource;
    long long  _writeSourceState;
}

@property (nonatomic, readonly, retain) NSFileHandle *fileHandleForReading;
@property (nonatomic, readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (void).cxx_destruct;
- (void)_createBufferFiles;
- (void)_inputReadyForReading:(unsigned long long)arg1;
- (void)_outputReadyForWriting:(unsigned long long)arg1;
- (void)_writeBufferedData;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end

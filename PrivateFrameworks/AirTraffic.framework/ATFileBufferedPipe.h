
@interface ATFileBufferedPipe : NSObject {
    ATFileBuffer * _buffer;
    NSFileHandle * _fileHandleForReading;
    NSFileHandle * _fileHandleForWriting;
    NSPipe * _inputPipe;
    NSPipe * _outputPipe;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    bool  _readyForData;
    bool  _readyToClose;
    NSObject<OS_dispatch_source> * _writeSource;
}

@property (nonatomic, readonly, retain) NSFileHandle *fileHandleForReading;
@property (nonatomic, readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (void).cxx_destruct;
- (id)_bufferedWrite:(id)arg1;
- (void)_inputReadyForReading:(unsigned long long)arg1;
- (void)_outputReadyForWriting:(unsigned long long)arg1;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end

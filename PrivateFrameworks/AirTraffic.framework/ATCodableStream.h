
@interface ATCodableStream : NSObject <NSSecureCoding> {
    NSFileHandle * _fileHandleForReading;
    NSInputStream * _inputStream;
    NSObject<OS_dispatch_queue> * _queue;
    MSVStreamReader * _reader;
    MSVStreamWriter * _writer;
}

@property (nonatomic, readonly) NSFileHandle *fileHandleForReading;
@property (nonatomic, readonly) NSInputStream *inputStream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandleForReading;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputStream:(id)arg1;
- (id)inputStream;

@end

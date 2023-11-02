
@interface SYInputStreamTransaction : NSObject <SYStreamTransaction> {
    NSURL * _fileURL;
    NSDictionary * _metadata;
    NSProgress * _progress;
    NSInputStream<SYStreamEventHandlerBlocks><SYStreamProgress> * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3;
- (id)inputStream;
- (id)metadata;
- (id)progress;
- (long long)type;

@end

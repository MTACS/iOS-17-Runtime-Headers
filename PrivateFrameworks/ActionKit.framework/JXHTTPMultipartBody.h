
@interface JXHTTPMultipartBody : NSObject <JXHTTPRequestBody, NSStreamDelegate> {
    NSMutableData * _bodyDataBuffer;
    NSString * _boundaryString;
    long long  _bytesWritten;
    NSData * _finalBoundaryData;
    long long  _httpContentLength;
    NSString * _httpContentType;
    NSInputStream * _httpInputStream;
    NSOutputStream * _httpOutputStream;
    NSMutableArray * _partsArray;
    unsigned long long  _streamBufferLength;
}

@property (nonatomic, retain) NSMutableData *bodyDataBuffer;
@property (nonatomic, retain) NSString *boundaryString;
@property (nonatomic) long long bytesWritten;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *finalBoundaryData;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long httpContentLength;
@property (nonatomic, retain) NSString *httpContentType;
@property (nonatomic, retain) NSInputStream *httpInputStream;
@property (nonatomic, retain) NSOutputStream *httpOutputStream;
@property (nonatomic, retain) NSMutableArray *partsArray;
@property (nonatomic) unsigned long long streamBufferLength;
@property (readonly) Class superclass;

+ (id)withDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)addFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)addPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5;
- (void)addString:(id)arg1 forKey:(id)arg2;
- (id)bodyDataBuffer;
- (id)boundaryString;
- (long long)bytesWritten;
- (void)dealloc;
- (id)finalBoundaryData;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (void)httpOperationDidFail:(id)arg1;
- (void)httpOperationDidFinishLoading:(id)arg1;
- (void)httpOperationWillNeedNewBodyStream:(id)arg1;
- (void)httpOperationWillStart:(id)arg1;
- (id)httpOutputStream;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)loadMutableData:(id)arg1 withDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)partsArray;
- (void)recreateStreamsForOperation:(id)arg1;
- (void)scheduleOutputStreamOnThread:(id)arg1;
- (void)setBodyDataBuffer:(id)arg1;
- (void)setBoundaryString:(id)arg1;
- (void)setBytesWritten:(long long)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)setFile:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4;
- (void)setFinalBoundaryData:(id)arg1;
- (void)setHttpContentLength:(long long)arg1;
- (void)setHttpContentType:(id)arg1;
- (void)setHttpInputStream:(id)arg1;
- (void)setHttpOutputStream:(id)arg1;
- (void)setPartWithType:(int)arg1 forKey:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 data:(id)arg5;
- (void)setPartsArray:(id)arg1;
- (void)setStreamBufferLength:(unsigned long long)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (unsigned long long)streamBufferLength;

@end


@interface NviDataLogger : NSObject <NSStreamDelegate> {
    NSOutputStream * _oStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOutputStream *oStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)endRequest;
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;
- (void)logData:(id)arg1;
- (id)oStream;
- (void)setOStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end

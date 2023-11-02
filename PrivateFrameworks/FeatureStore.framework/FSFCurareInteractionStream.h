
@interface FSFCurareInteractionStream : NSObject <FSFStreamSourceProtocol> {
    <FSFStreamSourceProtocol> * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FSFStreamSourceProtocol> *stream;
@property (readonly) Class superclass;

+ (id)eventFilterForEventTypes:(id)arg1;
+ (id)getWithStreamId:(id)arg1;
+ (id)getWithStreamId:(id)arg1 sourceType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)deleteCurrentStream;
- (id)initWithStreamId:(id)arg1;
- (id)initWithStreamId:(id)arg1 sourceType:(unsigned long long)arg2;
- (bool)insert:(id)arg1 error:(id*)arg2;
- (id)retrieve:(id)arg1;
- (void)retrieve:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setStream:(id)arg1;
- (id)stream;

@end

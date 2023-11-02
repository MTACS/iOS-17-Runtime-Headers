
@interface KSForwardingWriter : NSObject <KSWriter> {
    <KSWriter> * _writer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithOutputWriter:(id)arg1;
- (void)writeString:(id)arg1;

@end

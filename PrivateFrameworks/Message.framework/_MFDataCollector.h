
@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFBufferedDataConsumer * _consumer;
    bool  _incomplete;
    MFMailMessageLibrary * _library;
    MFLibraryMessage * _message;
    NSString * _part;
    bool  _partial;
    bool  _relaxDataProtection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(bool)arg4 incomplete:(bool)arg5 relaxDataProtection:(bool)arg6;
- (id)pathForStorage;

@end

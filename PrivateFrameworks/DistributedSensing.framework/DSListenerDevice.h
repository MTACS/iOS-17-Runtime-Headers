
@interface DSListenerDevice : DSRapportDevice {
    DSClientMotionDataOptions * _inOptions;
    id /* block */  _responseHandler;
    unsigned int  _version;
}

@property (nonatomic, retain) DSClientMotionDataOptions *inOptions;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)inOptions;
- (id)initWithRapportDevice:(id)arg1 queue:(id)arg2;
- (id /* block */)responseHandler;
- (void)setInOptions:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end


@interface CMIInferenceNetworkInstanceEspressoV2 : NSObject <CMIInferenceNetworkInstance> {
    struct e5rt_execution_stream_operation { } * _esop;
    unsigned long long  _eventValue;
    NSArray * _inputTextures;
    NSArray * _outputTextures;
    CMIInferenceNetworkEspressoV2 * _parentNetwork;
    struct e5rt_async_event { } * _postEvent;
    struct e5rt_async_event { } * _preEvent;
    <MTLSharedEventSPI> * _sharedEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct e5rt_execution_stream_operation { }*esop;
@property (nonatomic) unsigned long long eventValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputTextures;
@property (nonatomic, retain) NSArray *outputTextures;
@property (nonatomic) CMIInferenceNetworkEspressoV2 *parentNetwork;
@property (nonatomic) struct e5rt_async_event { }*postEvent;
@property (nonatomic) struct e5rt_async_event { }*preEvent;
@property (nonatomic, retain) <MTLSharedEventSPI> *sharedEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_allocateTexturesWithDevice:(id)arg1 ports:(id)arg2 useTextureArrays:(bool)arg3 outputTextureArray:(id)arg4;
- (int)_createEventsWithDevice:(id)arg1;
- (void)dealloc;
- (struct e5rt_execution_stream_operation { }*)esop;
- (unsigned long long)eventValue;
- (id)init;
- (id)inputTextures;
- (id)outputTextures;
- (id)parentNetwork;
- (struct e5rt_async_event { }*)postEvent;
- (struct e5rt_async_event { }*)preEvent;
- (void)setEsop:(struct e5rt_execution_stream_operation { }*)arg1;
- (void)setEventValue:(unsigned long long)arg1;
- (void)setInputTextures:(id)arg1;
- (void)setOutputTextures:(id)arg1;
- (void)setParentNetwork:(id)arg1;
- (void)setPostEvent:(struct e5rt_async_event { }*)arg1;
- (void)setPreEvent:(struct e5rt_async_event { }*)arg1;
- (void)setSharedEvent:(id)arg1;
- (id)sharedEvent;
- (int)synchronizeMetalWaitOnNetworkSignal:(id)arg1;
- (int)synchronizeNetworkWaitOnMetalSignal:(id)arg1;

@end

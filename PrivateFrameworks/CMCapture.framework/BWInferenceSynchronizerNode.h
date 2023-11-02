
@interface BWInferenceSynchronizerNode : BWNode {
    bool  _allowOutOfOrderInputs;
    NSSet * _attachedMediaKeysToSkip;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    struct { 
        NSMutableArray *bufferQueue; 
        BWNodeError *mostRecentError; 
        NSMutableDictionary *mostRecentCaptureIdentifierByPortType; 
        NSMutableDictionary *numberOfWraparoundsByPortType; 
        bool inputIsLive; 
    }  _contexts;
    unsigned short  _errorHandlingModel;
    int  _indexOfInputProvidingOnlyInferences;
    int  _indexOfInputProvidingOutputSampleBuffer;
    int  _indexOfInputProvidingPreferredInferences;
    unsigned char  _maximumNumberOfInflightBuffers;
    NSMutableDictionary * _mostRecentEmittedCaptureIdentifierByPortType;
    id /* block */  _synchronizeInferencesResolver;
    bool  _synchronizesTopLevelAttachments;
}

@property (nonatomic) bool allowOutOfOrderInputs;
@property (nonatomic, retain) NSSet *attachedMediaKeysToSkip;
@property (nonatomic, readonly) unsigned short errorHandlingModel;
@property (nonatomic, readonly) BWNodeInput *inputProvidingOnlyInferences;
@property (nonatomic, readonly) BWNodeInput *inputProvidingOutputSampleBuffer;
@property (nonatomic, readonly) BWNodeInput *inputProvidingPreferredInferences;
@property (nonatomic, copy) id /* block */ synchronizeInferencesResolver;
@property (nonatomic) bool synchronizesTopLevelAttachments;

+ (void)initialize;

- (bool)allowOutOfOrderInputs;
- (id)attachedMediaKeysToSkip;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (unsigned short)errorHandlingModel;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithIndexOfInputProvidingOutputSampleBuffer:(int)arg1 indexOfInputProvidingPreferredInferences:(int)arg2 errorHandlingModel:(unsigned short)arg3;
- (id)inputProvidingOnlyInferences;
- (id)inputProvidingOutputSampleBuffer;
- (id)inputProvidingPreferredInferences;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAllowOutOfOrderInputs:(bool)arg1;
- (void)setAttachedMediaKeysToSkip:(id)arg1;
- (void)setSynchronizeInferencesResolver:(id /* block */)arg1;
- (void)setSynchronizesTopLevelAttachments:(bool)arg1;
- (id /* block */)synchronizeInferencesResolver;
- (bool)synchronizesTopLevelAttachments;

@end

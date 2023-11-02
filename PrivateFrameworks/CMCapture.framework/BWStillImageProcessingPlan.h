
@interface BWStillImageProcessingPlan : NSObject {
    NSMutableDictionary * _inputsByBufferTypeByPortTypeBySequenceNumber;
    BWStillImageSettings * _settings;
}

- (void)addInput:(id)arg1 sequenceNumber:(unsigned int)arg2 portType:(id)arg3 bufferType:(unsigned long long)arg4;
- (void)addInput:(id)arg1 sequenceNumber:(unsigned int)arg2 portType:(id)arg3 bufferTypes:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)initWithSettings:(id)arg1;
- (id)lastAddedInputForSequenceNumber:(unsigned int)arg1 portType:(id)arg2 bufferType:(unsigned long long)arg3;

@end

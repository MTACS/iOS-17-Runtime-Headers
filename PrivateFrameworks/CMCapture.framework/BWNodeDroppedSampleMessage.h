
@interface BWNodeDroppedSampleMessage : BWNodeMessage {
    BWDroppedSample * _droppedSample;
}

@property (readonly) BWDroppedSample *droppedSample;

+ (id)newMessageWithDroppedSample:(id)arg1;

- (void)dealloc;
- (id)droppedSample;

@end

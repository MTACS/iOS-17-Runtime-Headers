
@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer> {
    long long  _descriptorIndex;
    NSArray * _descriptors;
    bool  _shouldConsumeEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *descriptors;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldConsumeEvents;
@property (readonly) Class superclass;

+ (id)recognizerForEventDescriptor:(id)arg1;
+ (id)recognizerForEventDescriptors:(id)arg1;

- (void).cxx_destruct;
- (id)descriptors;
- (long long)processEvent:(struct __IOHIDEvent { }*)arg1 shouldConsume:(bool*)arg2;
- (void)setShouldConsumeEvents:(bool)arg1;
- (bool)shouldConsumeEvents;

@end

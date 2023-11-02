
@interface TextSequenceInference : NSObject <TextSequence> {
    NSMutableArray * _sequence;
    NSNumber * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addWordWithInputId:(unsigned long long)arg1;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1 BOS:(unsigned long long)arg2;
- (void)resetWithBOS:(unsigned long long)arg1;
- (id)sequence;
- (id)target;

@end

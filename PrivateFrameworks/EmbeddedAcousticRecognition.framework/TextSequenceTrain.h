
@interface TextSequenceTrain : NSObject <TextSequence> {
    NSMutableArray * _mask;
    NSMutableArray * _sequence;
    NSMutableArray * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addWordWithInputId:(unsigned long long)arg1;
- (void)addWordWithInputId:(unsigned long long)arg1 target:(unsigned long long)arg2 mask:(unsigned long long)arg3;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1;
- (id)mask;
- (id)sequence;
- (id)target;

@end

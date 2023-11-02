
@interface _DPDediscoPrioPiRapporShare : NSObject {
    void numberOfEncodedIndices;
    void piRapporOtherPhi;
    void prioShare;
}

- (void).cxx_destruct;
- (unsigned long long)getNumberOfEncodedIndices;
- (id)getPiRapporOtherPhi;
- (id)getPrioShare;
- (id)init;
- (id)initWithPrioShare:(id)arg1 numberOfEncodedIndices:(unsigned long long)arg2 piRapporOtherPhi:(id)arg3;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (id)serializeAndReturnError:(id*)arg1;

@end


@interface AMSPACTokenTask : AMSTask {
    NSData * _signingData;
    NSString * _simLabelID;
}

@property (retain) NSData *signingData;
@property (readonly) NSString *simLabelID;

+ (id)signatureForSimLabelID:(id)arg1 fromSignatures:(id)arg2;
+ (id)signatureMapFromServerSignatures:(id)arg1;
+ (id)tokenForSimLabelID:(id)arg1 withQueue:(id)arg2 signingData:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSimLabelID:(id)arg1;
- (id)perform;
- (void)setSigningData:(id)arg1;
- (id)signingData;
- (id)simLabelID;

@end

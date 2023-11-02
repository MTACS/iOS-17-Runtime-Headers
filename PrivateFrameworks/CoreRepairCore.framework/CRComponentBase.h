
@interface CRComponentBase : NSObject {
    NSString * identiferBase64;
}

@property (nonatomic, retain) NSString *identiferBase64;

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (unsigned int)CRCreateECDSADerData:(id)arg1 responseDer:(id*)arg2;
- (void)challengeComponentWith:(id)arg1 withReply:(id /* block */)arg2;
- (id)identiferBase64;
- (id)init;
- (void)setIdentiferBase64:(id)arg1;
- (id)sha256:(id)arg1;

@end

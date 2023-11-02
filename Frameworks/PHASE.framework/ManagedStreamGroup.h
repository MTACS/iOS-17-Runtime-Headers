
@interface ManagedStreamGroup : NSObject {
    NSUUID * _controllingClientID;
    NSMutableDictionary * _inputStreams;
    NSMutableDictionary * _outputStreams;
    id /* block */  _stateChangeBlock;
}

@property (nonatomic, retain) NSUUID *controllingClientID;
@property (nonatomic, retain) NSMutableDictionary *inputStreams;
@property (nonatomic, retain) NSMutableDictionary *outputStreams;
@property (nonatomic, copy) id /* block */ stateChangeBlock;

- (void).cxx_destruct;
- (id)controllingClientID;
- (id)init;
- (id)inputStreams;
- (id)outputStreams;
- (void)setControllingClientID:(id)arg1;
- (void)setInputStreams:(id)arg1;
- (void)setOutputStreams:(id)arg1;
- (void)setStateChangeBlock:(id /* block */)arg1;
- (id /* block */)stateChangeBlock;

@end


@interface _MPCPlaybackEngineEventStreamInitializationParameters : NSObject <MPCPlaybackEngineEventStreamInitializationParameters> {
    NSString * _engineID;
    NSString * _originID;
    NSString * _playerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *engineID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originID;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)engineID;
- (id)initWithPlaybackEngineParameters:(id)arg1 engineID:(id)arg2;
- (id)originID;
- (id)playerID;

@end

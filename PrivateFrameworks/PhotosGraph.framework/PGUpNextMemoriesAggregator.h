
@interface PGUpNextMemoriesAggregator : NSObject {
    NSMutableArray * _acceptedMemories;
    bool  _gateOnUserFeedback;
    NSMutableSet * _keyAssetLocalIdentifiers;
    NSObject<OS_os_log> * _loggingConnection;
    NSMutableSet * _lowercaseTitles;
}

@property (nonatomic, retain) NSMutableArray *acceptedMemories;
@property (nonatomic, readonly) bool gateOnUserFeedback;
@property (nonatomic, readonly) NSMutableSet *keyAssetLocalIdentifiers;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) NSMutableSet *lowercaseTitles;

- (void).cxx_destruct;
- (id)acceptedMemories;
- (bool)addUpNextMemory:(id)arg1 debugInfo:(id*)arg2;
- (bool)gateOnUserFeedback;
- (id)initWithLowercaseTitles:(id)arg1 keyAssetLocalIdentifiers:(id)arg2 gateOnUserFeedback:(bool)arg3 loggingConnection:(id)arg4;
- (id)keyAssetLocalIdentifiers;
- (id)loggingConnection;
- (id)lowercaseTitles;
- (void)setAcceptedMemories:(id)arg1;

@end

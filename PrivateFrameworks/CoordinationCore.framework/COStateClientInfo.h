
@interface COStateClientInfo : NSObject {
    NSSet * _clusters;
    bool  _disconnected;
    NSDictionary * _observers;
    long long  _outstandingWriteCount;
    NSDictionary * _state;
    NSString * _suite;
}

@property (nonatomic, readonly, copy) NSSet *clusters;
@property (nonatomic) bool disconnected;
@property (nonatomic, readonly, copy) NSDictionary *observers;
@property (nonatomic) long long outstandingWriteCount;
@property (nonatomic, readonly, copy) NSDictionary *state;
@property (nonatomic, readonly, copy) NSString *suite;

- (void).cxx_destruct;
- (id)clusters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disconnected;
- (id)initWithSuite:(id)arg1 clusters:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)observers;
- (long long)outstandingWriteCount;
- (void)setDisconnected:(bool)arg1;
- (void)setOutstandingWriteCount:(long long)arg1;
- (id)state;
- (id)stateForCluster:(id)arg1;
- (id)suite;

@end

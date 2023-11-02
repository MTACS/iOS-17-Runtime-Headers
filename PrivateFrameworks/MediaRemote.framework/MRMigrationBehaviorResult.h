
@interface MRMigrationBehaviorResult : NSObject {
    long long  _action;
    NSString * _destinationUID;
    NSError * _error;
    NSString * _reason;
    NSString * _sourceUID;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) NSString *destinationUID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *sourceUID;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (id)destinationUID;
- (id)dictionaryRepresentation;
- (id)error;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (void)setAction:(long long)arg1;
- (void)setDestinationUID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSourceUID:(id)arg1;
- (id)sourceUID;

@end

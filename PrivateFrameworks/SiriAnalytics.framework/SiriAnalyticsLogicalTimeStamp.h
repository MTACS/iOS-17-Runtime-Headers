
@interface SiriAnalyticsLogicalTimeStamp : NSObject {
    NSUUID * _clockIdentifier;
    unsigned long long  _nanoSecondsSinceBoot;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) unsigned long long nanoSecondsSinceBoot;

- (void).cxx_destruct;
- (id)clockIdentifier;
- (id)init;
- (id)initWithMachAbsoluteTime:(unsigned long long)arg1 clockIdentifier:(id)arg2;
- (id)initWithNanosecondsSinceBoot:(unsigned long long)arg1 clockIdentifier:(id)arg2;
- (id)loggingRepresentation;
- (unsigned long long)nanoSecondsSinceBoot;

@end

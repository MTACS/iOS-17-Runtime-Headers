
@interface SILogicalTimestamp : NSObject {
    SILogicalTimestampInternal * _underlying;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) unsigned long long nanoSecondsSinceBoot;

- (void).cxx_destruct;
- (id)clockIdentifier;
- (id)initWithClockIdentifier:(id)arg1 nanosecondsSinceBoot:(unsigned long long)arg2;
- (id)initWithInternalType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)nanoSecondsSinceBoot;
- (id)underlying;

@end

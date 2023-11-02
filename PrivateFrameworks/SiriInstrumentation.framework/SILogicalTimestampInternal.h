
@interface SILogicalTimestampInternal : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clockIdentifier;
    void nanosecondsSinceBoot;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) unsigned long long nanosecondsSinceBoot;

- (void).cxx_destruct;
- (id)clockIdentifier;
- (id)init;
- (id)initWithClockIdentifier:(id)arg1 nanosecondsSinceBoot:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)nanosecondsSinceBoot;

@end

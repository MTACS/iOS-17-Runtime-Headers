
@interface ObjCFinalizedTimestamp : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

@property (nonatomic, readonly) long long counter;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) ObjCReplica *replica;

- (void).cxx_destruct;
- (long long)counter;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithReplica:(id)arg1 counter:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGreaterThanTimestamp:(id)arg1;
- (id)replica;

@end

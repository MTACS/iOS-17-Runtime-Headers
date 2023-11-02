
@interface ObjCTimestamp : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

@property (nonatomic, readonly) long long counter;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) ObjCReplica *replica;

- (void).cxx_destruct;
- (long long)counter;
- (id)description;
- (id)init;
- (id)initWithReplica:(id)arg1 counter:(long long)arg2;
- (id)replica;

@end

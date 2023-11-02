
@interface BMPendingWrite : NSObject {
    id  _event;
    double  _timestamp;
}

@property (nonatomic, readonly) id event;
@property (nonatomic, readonly) double timestamp;

+ (id)pendingWriteWithEvent:(id)arg1 timestamp:(double)arg2;

- (void).cxx_destruct;
- (id)event;
- (double)timestamp;

@end

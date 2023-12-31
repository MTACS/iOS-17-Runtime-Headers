
@interface SnapshotTimer : NSObject {
    bool  taskIsComplete;
}

@property (nonatomic) bool taskIsComplete;

+ (void)takeSnapshotForTask:(id)arg1;

- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (void)checkout;
- (id)init;
- (void)setTaskIsComplete:(bool)arg1;
- (bool)taskIsComplete;

@end

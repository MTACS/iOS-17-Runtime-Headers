
@interface DockKitCore.Quaternion : NSObject {
    void w;
    void x;
    void y;
    void z;
}

@property (nonatomic, readonly) long long hash;

- (long long)hash;
- (id)init;
- (id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 w:(double)arg4;
- (bool)isEqual:(id)arg1;

@end

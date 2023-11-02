
@interface DockKitCore.Pose : NSObject {
    void position;
    void rotation;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end

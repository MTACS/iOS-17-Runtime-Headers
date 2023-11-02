
@interface PHVideoXPCRequest : PLResourceXPCRequest {
    PHVideoRequestBehaviorSpec * _behaviorSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)behaviorSpec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 behavior:(id)arg4;
- (struct CGSize { double x1; double x2; })size;

@end


@interface DockKitCore.CameraLimit : NSObject <NSSecureCoding> {
    void camera;
    void maxPosition;
    void minPosition;
    void model;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

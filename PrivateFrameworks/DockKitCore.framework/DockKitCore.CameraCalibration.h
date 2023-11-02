
@interface DockKitCore.CameraCalibration : NSObject {
    void fov;
    void fx;
    void fy;
    void orientation;
    void ox;
    void oy;
    void portType;
    void referenceDimensions;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isEqual:(id)arg1;

@end

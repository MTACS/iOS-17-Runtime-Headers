
@interface ChronoCore.StateCaptureInvalidator : NSObject {
    void handle;
    void invalidated;
}

- (id)init;

@end

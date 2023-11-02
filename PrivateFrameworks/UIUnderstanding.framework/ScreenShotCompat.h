
@interface ScreenShotCompat : NSObject {
    void detections;
    void groupingInfo;
    void image;
    void imageID;
}

@property (nonatomic, readonly) NSString *imageID;

- (void).cxx_destruct;
- (id)imageID;
- (id)init;
- (id)initWithId:(id)arg1 image:(struct CGImage { }*)arg2 detections:(id)arg3 groupingInfo:(id)arg4;

@end


@interface ARDepthMapData : NSObject <ARResultData> {
    struct CGImage { } * _depthMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) struct CGImage { }*depthMap;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGImage { }*)depthMap;
- (void)setDepthMap:(struct CGImage { }*)arg1;

@end

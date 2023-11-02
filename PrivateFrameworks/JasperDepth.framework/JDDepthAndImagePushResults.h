
@interface JDDepthAndImagePushResults : NSObject {
    NSArray * _droppedImages;
    JDMatchedDepthAndImage * _match;
}

@property (nonatomic, retain) NSArray *droppedImages;
@property (nonatomic, retain) JDMatchedDepthAndImage *match;

- (void).cxx_destruct;
- (id)droppedImages;
- (id)match;
- (void)setDroppedImages:(id)arg1;
- (void)setMatch:(id)arg1;

@end

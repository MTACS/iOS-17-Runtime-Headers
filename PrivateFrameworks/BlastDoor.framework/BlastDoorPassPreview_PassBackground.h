
@interface BlastDoorPassPreview_PassBackground : NSObject {
    void passPreview_PassBackground;
}

@property (nonatomic, readonly) BlastDoorColor *color;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *image;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (id)image;
- (id)init;

@end


@interface CLDeviceMotionProperties : NSObject {
    int  _mode;
}

@property (nonatomic) int mode;

- (id)description;
- (id)initWithMode:(int)arg1;
- (int)mode;
- (void)setMode:(int)arg1;

@end


@interface VFXREREnderer : NSObject {
    void commandQueue;
    void device;
}

@property (nonatomic, retain) <MTLDevice> *device;

- (void).cxx_destruct;
- (id)device;
- (id)init;
- (void)setDevice:(id)arg1;

@end

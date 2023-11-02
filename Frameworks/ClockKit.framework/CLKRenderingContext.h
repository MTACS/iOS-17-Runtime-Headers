
@interface CLKRenderingContext : NSObject {
    CLKDevice * _device;
}

@property (nonatomic, readonly) CLKDevice *device;

+ (id)sharedRenderingContext;

- (void).cxx_destruct;
- (id)_init;
- (id)device;
- (void)setDevice:(id)arg1;

@end

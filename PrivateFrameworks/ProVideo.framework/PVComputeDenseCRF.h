
@interface PVComputeDenseCRF : NSObject {
    PVImageBuffer * _color;
    PVImageBuffer * _proxy;
}

- (void).cxx_destruct;
- (void)generateMatte:(id)arg1;
- (id)initWithColor:(id)arg1 proximity:(id)arg2;

@end

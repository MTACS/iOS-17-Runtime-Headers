
@interface EspressoBrickTensor : NSObject {
    EspressoBrickTensorShape * _shape;
}

@property (retain) EspressoBrickTensorShape *shape;

- (void).cxx_destruct;
- (id)init;
- (void)setShape:(id)arg1;
- (id)shape;

@end

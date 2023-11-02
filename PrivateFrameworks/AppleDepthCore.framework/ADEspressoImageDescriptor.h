
@interface ADEspressoImageDescriptor : NSObject {
    ADImageDescriptor * _imageDescriptor;
    bool  _isInput;
    NSString * _name;
}

@property (nonatomic, readonly) ADImageDescriptor *imageDescriptor;
@property (nonatomic, readonly) bool isInput;
@property (nonatomic, readonly) NSString *name;

+ (id)descriptorWithName:(id)arg1 imageDescriptor:(id)arg2 isInput:(bool)arg3;
+ (id)inputDescriptorWithName:(id)arg1 pixelFormat:(unsigned int)arg2;
+ (id)outputDescriptorWithName:(id)arg1 pixelFormat:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)imageDescriptor;
- (bool)isInput;
- (id)name;

@end

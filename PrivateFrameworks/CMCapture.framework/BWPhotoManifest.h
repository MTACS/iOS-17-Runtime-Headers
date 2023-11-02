
@interface BWPhotoManifest : NSObject <NSSecureCoding> {
    NSMutableDictionary * _bufferPtrValueToPhotoDescriptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferPtrValueToPhotoDescriptorLock;
    NSString * _captureRequestIdentifier;
    NSArray * _photoDescriptors;
}

@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) NSArray *photoDescriptors;

+ (bool)supportsSecureCoding;

- (void)cannotProcessDepthPhotos;
- (id)captureRequestIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptorForIdentifier:(id)arg1;
- (id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)photoDescriptors;

@end


@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _imageIdentifier;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    bool  _isDemoModeDescriptor;
    bool  _isSystemImage;
    bool  _shouldForceLTR;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic) bool isDemoModeDescriptor;
@property (nonatomic, readonly) bool isSystemImage;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)imageIconDescriptorWithUpdatedImageSymbolConfiguration:(id)arg1;
- (id)imageIdentifier;
- (id)imageSymbolConfiguration;
- (id)initWithDemoModeImageIdentifier:(id)arg1;
- (id)initWithImageIdentifier:(id)arg1;
- (id)initWithSymbolIconConfiguration:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1 configuration:(id)arg2;
- (bool)isDemoModeDescriptor;
- (bool)isEqual:(id)arg1;
- (bool)isSystemImage;
- (void)setIsDemoModeDescriptor:(bool)arg1;
- (bool)shouldForceLTR;

@end


@interface _PIParallaxLayerStackScalePolicy : NSObject <NUScalePolicy> {
    PFPosterOrientedLayout * _layout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PFPosterOrientedLayout *layout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (struct { long long x1; long long x2; })scaleForImageSize:(struct { long long x1; long long x2; })arg1;

@end

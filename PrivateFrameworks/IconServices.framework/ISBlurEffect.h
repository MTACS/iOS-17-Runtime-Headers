
@interface ISBlurEffect : NSObject <ISEffect> {
    double  _radius;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double radius;
@property (readonly) Class superclass;

- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithRadius:(double)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;

@end

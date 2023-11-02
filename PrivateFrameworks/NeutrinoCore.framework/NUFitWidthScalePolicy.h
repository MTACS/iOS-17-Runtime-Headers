
@interface NUFitWidthScalePolicy : NSObject <NUScalePolicy> {
    long long  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithWidth:(long long)arg1;
- (struct { long long x1; long long x2; })scaleForImageSize:(struct { long long x1; long long x2; })arg1;

@end

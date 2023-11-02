
@interface PXPersonTiledImageCombinerItem : NSObject <PXFaceTileImageCombinerItem> {
    <PXPerson> * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 resultHandler:(id /* block */)arg4;

@end

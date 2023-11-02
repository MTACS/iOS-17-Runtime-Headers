
@interface PXStoryPlayButtonConfiguration : NSObject <PXGViewUserData> {
    SEL  _action;
    PXStoryPlayButtonSpec * _spec;
    id  _target;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic) SEL action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryPlayButtonSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic) id target;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (SEL)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithViewModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setSpec:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)spec;
- (id)target;
- (id)viewModel;

@end

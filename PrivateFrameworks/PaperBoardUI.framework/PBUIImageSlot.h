
@interface PBUIImageSlot : NSObject {
    UIImage * _image;
    <BSInvalidatable> * _lifetimeToken;
}

@property (setter=_setImage:, retain) UIImage *image;
@property (nonatomic, readonly) <BSInvalidatable> *lifetimeToken;

- (void).cxx_destruct;
- (id)_deferredImageSlot;
- (id)_initWithImage:(id)arg1 lifetimeToken:(id)arg2;
- (void)_setImage:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1 lifetimeToken:(id)arg2;
- (id)lifetimeToken;

@end

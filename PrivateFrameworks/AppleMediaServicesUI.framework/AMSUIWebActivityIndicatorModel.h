
@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface> {
    bool  _animate;
}

@property (nonatomic) bool animate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)animate;
- (id)debugDescription;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (void)setAnimate:(bool)arg1;

@end

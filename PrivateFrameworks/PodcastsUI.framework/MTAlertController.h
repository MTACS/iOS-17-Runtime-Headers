
@interface MTAlertController : UIAlertController {
    bool  _replacesExistingAlert;
}

@property (nonatomic) bool replacesExistingAlert;

- (id)alertIdentifier;
- (id)init;
- (void)presentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)replacesExistingAlert;
- (void)setReplacesExistingAlert:(bool)arg1;

@end

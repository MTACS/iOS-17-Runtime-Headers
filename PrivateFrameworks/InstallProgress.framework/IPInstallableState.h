
@interface IPInstallableState : NSObject {
    bool  _isInstalling;
    IPInstallableStateSource * _source;
}

@property (readonly) bool isInstalling;
@property (readonly) IPInstallableStateSource *source;

- (void).cxx_destruct;
- (id)initWithStateSource:(id)arg1 isInstalling:(bool)arg2;
- (bool)isInstalling;
- (id)source;

@end

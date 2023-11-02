
@interface _SBPIPInteractionControllerTransitionInfo : NSObject {
    unsigned long long  _layoutCorner;
    SBWindowScene * _targetWindowScene;
}

@property (nonatomic) unsigned long long layoutCorner;
@property (nonatomic) SBWindowScene *targetWindowScene;

- (void).cxx_destruct;
- (unsigned long long)layoutCorner;
- (void)setLayoutCorner:(unsigned long long)arg1;
- (void)setTargetWindowScene:(id)arg1;
- (id)targetWindowScene;

@end


@interface UIViewInProcessAnimationTickEntry : NSObject {
    id /* block */  _callback;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _preferredFrameRateRange;
    unsigned int  _updateReason;
    bool  _velocityUsableForVFD;
}

@property (nonatomic, readonly) bool allowsVFD;
@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic, readonly) unsigned int updateReason;
@property (getter=isvelocityUsableForVFD, nonatomic, readonly) bool velocityUsableForVFD;

- (void).cxx_destruct;
- (bool)allowsVFD;
- (id /* block */)callback;
- (id)initWithPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 updateReason:(unsigned int)arg2 velocityUsableForVFD:(bool)arg3 callback:(id /* block */)arg4;
- (bool)isvelocityUsableForVFD;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (unsigned int)updateReason;

@end

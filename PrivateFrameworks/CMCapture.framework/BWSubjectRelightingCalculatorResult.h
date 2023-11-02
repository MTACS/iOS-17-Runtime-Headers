
@interface BWSubjectRelightingCalculatorResult : NSObject {
    float  _curveParameter;
    NSObject<OS_dispatch_group> * _group;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _relightingRequired;
}

@property (readonly) float curveParameter;
@property (readonly) bool relightingRequired;

- (void)_completeWithRelightingRequired:(bool)arg1 curveParameter:(float)arg2;
- (float)curveParameter;
- (void)dealloc;
- (id)init;
- (bool)relightingRequired;
- (bool)waitForResult;

@end

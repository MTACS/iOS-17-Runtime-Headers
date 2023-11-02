
@interface HMIVideoFrameSelector : HMIVideoAnalyzerProcessingNode <HMFLogging> {
    <HMIVideoFrameSelectorDelegate> * _delegate;
    bool  _enabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxReferences;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _referenceInterval;
    struct __CFArray { } * _references;
    bool  _resetReferences;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoFrameSelectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property unsigned long long maxReferences;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } referenceInterval;
@property (readonly) struct __CFArray { }*references;
@property bool resetReferences;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetInterval;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithConfiguration:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (unsigned long long)maxReferences;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })referenceInterval;
- (struct __CFArray { }*)references;
- (bool)resetReferences;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaxReferences:(unsigned long long)arg1;
- (void)setReferenceInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setResetReferences:(bool)arg1;
- (void)setSampleRate:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetInterval;

@end

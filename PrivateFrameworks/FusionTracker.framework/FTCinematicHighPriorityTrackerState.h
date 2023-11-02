
@interface FTCinematicHighPriorityTrackerState : NSObject {
    bool  _finalized;
    struct shared_ptr<ft::Frame> { 
        struct Frame {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frame;
    bool  _isTapToTrack;
    long long  _op;
    NSMutableDictionary * _sessionStorage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
    struct shared_ptr<ft::CinematicTracker> { 
        struct CinematicTracker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tracker;
}

@property (nonatomic) long long op;
@property (nonatomic, retain) NSMutableDictionary *sessionStorage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setup;
- (void)_setupOp;
- (void)_setupSessionStorage;
- (bool)_unsafeMeanFillAndScaleSourceBuffer:(void *)arg1 destinationBuffer:(void *)arg2 sourceRect:(void *)arg3 meanPixel:(void *)arg4 scaler:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, struct __CVBuffer { }*, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id
- (bool)_updateHighPriorityTrackWithRect:(struct Rect<double> { double x1; double x2; double x3; double x4; })arg1 confidence:(double)arg2 isTapToTrack:(bool)arg3;
- (bool)_validatePostProcessingInvocation;
- (void)abort;
- (bool)completed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exemplarInputRoiForTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTracker:(struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker {} *x1; struct __shared_weak_count {} *x2; })arg1 frame:(struct shared_ptr<ft::Frame> { struct Frame {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })instanceInputRoi;
- (long long)op;
- (id)opDescription;
- (bool)postProcessExemplarOutputs:(id)arg1 forTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)postProcessInstanceOutputs:(id)arg1;
- (bool)preProcessExemplarInputFromSourceBuffer:(void *)arg1 toDestinationBuffer:(void *)arg2 forTargetRect:(void *)arg3 meanPixel:(void *)arg4 scaler:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, struct __CVBuffer { }*, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id
- (bool)preProcessInstanceInputFromSourceBuffer:(void *)arg1 toDestinationBuffer:(void *)arg2 meanPixel:(void *)arg3 scaler:(void *)arg4; // needs 4 arg types, found 3: struct __CVBuffer { }*, struct __CVBuffer { }*, id
- (id)sessionStorage;
- (void)setOp:(long long)arg1;
- (void)setSessionStorage:(id)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;

@end

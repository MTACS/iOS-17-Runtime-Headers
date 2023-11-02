
@interface PBUIWallpaperStyleInfo : NSObject <BSDescriptionProviding> {
    struct { 
        bool valid; 
        struct { 
            long long startStyle; 
            long long endStyle; 
            double transitionFraction; 
        } styleTransitionState; 
    }  _priorityInfo;
    struct { 
        long long startStyle; 
        long long endStyle; 
        double transitionFraction; 
    }  _styleTransitionState;
    PBUIWallpaperEffectViewBase * _wallpaperEffectView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long highestValidPriority;
@property (nonatomic) struct { long long x1; long long x2; double x3; } styleTransitionState;
@property (readonly) Class superclass;
@property (nonatomic, retain) PBUIWallpaperEffectViewBase *wallpaperEffectView;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateValidPrioritiesUsingBlock:(id /* block */)arg1;
- (long long)highestValidPriority;
- (id)init;
- (struct { bool x1; struct { long long x_2_1_1; long long x_2_1_2; double x_2_1_3; } x2; })priorityInfoForPriority:(long long)arg1;
- (void)removePriorityInfoForPriority:(long long)arg1;
- (void)setPriorityInfo:(struct { bool x1; struct { long long x_2_1_1; long long x_2_1_2; double x_2_1_3; } x2; })arg1 forPriority:(long long)arg2;
- (void)setStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (struct { long long x1; long long x2; double x3; })styleTransitionState;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)wallpaperEffectView;

@end

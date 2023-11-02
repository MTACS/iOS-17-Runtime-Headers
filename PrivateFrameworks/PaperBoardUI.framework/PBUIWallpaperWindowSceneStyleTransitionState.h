
@interface PBUIWallpaperWindowSceneStyleTransitionState : NSObject <BSXPCCoding, NSCopying> {
    struct { 
        bool valid; 
        struct { 
            long long startStyle; 
            long long endStyle; 
            double transitionFraction; 
        } state; 
    }  _stateTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; long long x2; double x3; } highestPriorityStyleTransitionState;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)diffFromWallpaperWindowSceneStyleTransitionState:(id)arg1 updateHandler:(id /* block */)arg2 removeHandler:(id /* block */)arg3;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (struct { long long x1; long long x2; double x3; })highestPriorityStyleTransitionState;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeWallpaperStyleTransitionStateForPriority:(long long)arg1;
- (void)setWallpaperStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1 forPriority:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end


@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray * _backdrops;
    bool  _disableInPlaceFiltering;
    NSString * _groupName;
    NSString * _groupNamespace;
    double  _minimumScale;
    double  _scale;
}

@property (nonatomic) bool disableInPlaceFiltering;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupNamespace;
@property (nonatomic) double minimumScale;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)addBackdrop:(id)arg1 update:(bool)arg2;
- (bool)allowInPlaceFiltering;
- (void)applyScaleHint:(double)arg1;
- (id)description;
- (bool)disableInPlaceFiltering;
- (id)groupName;
- (id)groupNamespace;
- (long long)indexOfBackdropView:(id)arg1;
- (id)init;
- (id)initWithBackdrop:(id)arg1;
- (id)initWithName:(id)arg1 scale:(double)arg2;
- (double)minimumScale;
- (void)removeBackdrop:(id)arg1 update:(bool)arg2;
- (double)scale;
- (void)setDisableInPlaceFiltering:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNamespace:(id)arg1;
- (void)setMinimumScale:(double)arg1;
- (void)setScale:(double)arg1;
- (void)updateAllBackdropViews;

@end


@interface SBIconPreviousLocationTracker : NSObject {
    SBHIconModel * _iconModel;
    NSMapTable * _previousIconLocations;
}

@property (nonatomic, retain) SBHIconModel *iconModel;

- (void).cxx_destruct;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;
- (id)iconModel;
- (id)previousLocationInfoForIcon:(id)arg1;
- (void)setIconModel:(id)arg1;

@end

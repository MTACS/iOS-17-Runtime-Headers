
@interface BLHLSPlaylistState : NSObject {
    double  _currentDuration;
    BLHLSKey * _currentKey;
    BLHLSMap * _currentMap;
    BLHLSStreamInf * _currentStreamInf;
    NSMutableDictionary * _mutableGroups;
    NSMutableArray * _mutableSegments;
    NSMutableArray * _mutableStreamInfs;
}

@property (nonatomic) double currentDuration;
@property (nonatomic, retain) BLHLSKey *currentKey;
@property (nonatomic, retain) BLHLSMap *currentMap;
@property (nonatomic, retain) BLHLSStreamInf *currentStreamInf;
@property (nonatomic, retain) NSMutableDictionary *mutableGroups;
@property (nonatomic, retain) NSMutableArray *mutableSegments;
@property (nonatomic, retain) NSMutableArray *mutableStreamInfs;

- (void).cxx_destruct;
- (double)currentDuration;
- (id)currentKey;
- (id)currentMap;
- (id)currentStreamInf;
- (id)init;
- (id)mutableGroups;
- (id)mutableSegments;
- (id)mutableStreamInfs;
- (void)setCurrentDuration:(double)arg1;
- (void)setCurrentKey:(id)arg1;
- (void)setCurrentMap:(id)arg1;
- (void)setCurrentStreamInf:(id)arg1;
- (void)setMutableGroups:(id)arg1;
- (void)setMutableSegments:(id)arg1;
- (void)setMutableStreamInfs:(id)arg1;

@end

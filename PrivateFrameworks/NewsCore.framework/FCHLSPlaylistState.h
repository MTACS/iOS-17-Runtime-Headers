
@interface FCHLSPlaylistState : NSObject {
    double  _currentDuration;
    FCHLSKey * _currentKey;
    FCHLSMap * _currentMap;
    FCHLSStreamInf * _currentStreamInf;
    NSMutableDictionary * _mutableGroups;
    NSMutableArray * _mutableSegments;
    NSMutableDictionary * _mutableSessionData;
    NSMutableArray * _mutableStreamInfs;
}

- (void).cxx_destruct;
- (id)init;

@end

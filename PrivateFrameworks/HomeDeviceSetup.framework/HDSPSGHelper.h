
@interface HDSPSGHelper : NSObject {
    NSArray * _allHomePods;
    NSArray * _allPSGs;
    NSArray * _allStereoPairs;
    HMHome * _currentHome;
    NSMutableDictionary * _psgHomePodMap;
    NSMutableDictionary * _psgRoomMap;
    NSMutableDictionary * _psgStereoPairMap;
}

- (void).cxx_destruct;
- (id)allPSGsInRoom:(id)arg1;
- (id)fetchPSG:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)roomForStereoPair:(id)arg1;
- (id)roomsForPSG:(id)arg1;

@end

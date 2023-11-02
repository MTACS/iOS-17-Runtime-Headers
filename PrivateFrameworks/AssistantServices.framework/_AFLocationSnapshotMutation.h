
@interface _AFLocationSnapshotMutation : NSObject <AFLocationSnapshotMutating> {
    long long  _accessState;
    NSNumber * _altitude;
    AFLocationSnapshot * _base;
    NSNumber * _direction;
    NSNumber * _horizontalAccuracy;
    NSNumber * _latitude;
    NSNumber * _longitude;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasLatitude : 1; 
        unsigned int hasLongitude : 1; 
        unsigned int hasAltitude : 1; 
        unsigned int hasDirection : 1; 
        unsigned int hasSpeed : 1; 
        unsigned int hasVerticalAccuracy : 1; 
        unsigned int hasHorizontalAccuracy : 1; 
        unsigned int hasPreciseLocationEnabled : 1; 
        unsigned int hasAccessState : 1; 
    }  _mutationFlags;
    bool  _preciseLocationEnabled;
    NSNumber * _speed;
    NSNumber * _verticalAccuracy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getAccessState;
- (id)getAltitude;
- (id)getDirection;
- (id)getHorizontalAccuracy;
- (id)getLatitude;
- (id)getLongitude;
- (bool)getPreciseLocationEnabled;
- (id)getSpeed;
- (id)getVerticalAccuracy;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAccessState:(long long)arg1;
- (void)setAltitude:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHorizontalAccuracy:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setPreciseLocationEnabled:(bool)arg1;
- (void)setSpeed:(id)arg1;
- (void)setVerticalAccuracy:(id)arg1;

@end


@interface HUPresenceUserOptionState : NSObject {
    unsigned long long  _activationGranularity;
    bool  _locationAvailable;
    bool  _selected;
}

@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (getter=isLocationAvailable, nonatomic, readonly) bool locationAvailable;
@property (getter=isSelected, nonatomic, readonly) bool selected;

- (unsigned long long)activationGranularity;
- (id)init;
- (id)initWithActivationGranularity:(unsigned long long)arg1 selected:(bool)arg2 locationAvailable:(bool)arg3;
- (bool)isLocationAvailable;
- (bool)isSelected;

@end

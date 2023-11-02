
@interface MSPrimaryUserChangedEvent : NSObject {
    bool  _changedToHomeOwner;
    bool  _changedToUserNotInHome;
    bool  _isAutomatic;
}

@property (nonatomic) bool changedToHomeOwner;
@property (nonatomic) bool changedToUserNotInHome;
@property (nonatomic) bool isAutomatic;

- (bool)changedToHomeOwner;
- (bool)changedToUserNotInHome;
- (id)initWithAccessory:(id)arg1;
- (bool)isAutomatic;
- (void)setChangedToHomeOwner:(bool)arg1;
- (void)setChangedToUserNotInHome:(bool)arg1;
- (void)setIsAutomatic:(bool)arg1;

@end

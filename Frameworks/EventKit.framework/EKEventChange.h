
@interface EKEventChange : EKCalendarItemChange {
    bool  _availabilityChanged;
    EKObjectID * _originalItemID;
    bool  _privacyLevelChanged;
    bool  _statusChanged;
    bool  _travelStartLocationChanged;
    bool  _travelTimeChanged;
}

@property (nonatomic, readonly) bool availabilityChanged;
@property (nonatomic, readonly) EKObjectID *originalItemID;
@property (nonatomic, readonly) bool privacyLevelChanged;
@property (nonatomic, readonly) bool statusChanged;
@property (nonatomic, readonly) bool travelStartLocationChanged;
@property (nonatomic, readonly) bool travelTimeChanged;

+ (int)entityType;

- (void).cxx_destruct;
- (bool)availabilityChanged;
- (id)initWithChangeProperties:(id)arg1;
- (id)originalItemID;
- (bool)privacyLevelChanged;
- (bool)statusChanged;
- (bool)travelStartLocationChanged;
- (bool)travelTimeChanged;

@end

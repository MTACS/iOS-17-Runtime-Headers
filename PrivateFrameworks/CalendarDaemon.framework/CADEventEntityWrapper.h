
@interface CADEventEntityWrapper : CADEntityWrapper {
    bool  _isDropoffEvent;
    bool  _isPickupEvent;
    double  _occurrenceDate;
}

@property (nonatomic) bool isDropoffEvent;
@property (nonatomic) bool isPickupEvent;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1 loadedValues:(id)arg2 occurrenceDate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isDropoffEvent;
- (bool)isPickupEvent;
- (id)occurrenceDate;
- (void)setIsDropoffEvent:(bool)arg1;
- (void)setIsPickupEvent:(bool)arg1;

@end

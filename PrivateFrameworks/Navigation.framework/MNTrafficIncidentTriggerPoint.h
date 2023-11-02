
@interface MNTrafficIncidentTriggerPoint : NSObject <NSSecureCoding> {
    bool  _allowsShifting;
    struct { 
        unsigned int index; 
        float offset; 
    }  _referenceCoordinate;
}

@property (nonatomic, readonly) bool allowsShifting;
@property (nonatomic) struct { unsigned int x1; float x2; } referenceCoordinate;

+ (bool)supportsSecureCoding;

- (bool)allowsShifting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceCoordinate:(struct { unsigned int x1; float x2; })arg1 allowsShifting:(bool)arg2;
- (struct { unsigned int x1; float x2; })referenceCoordinate;
- (void)setReferenceCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (bool)shouldActivateForLocation:(id)arg1;

@end

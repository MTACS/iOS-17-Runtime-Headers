
@interface LNViewEntity : NSObject <NSCopying, NSSecureCoding> {
    LNEntityIdentifier * _identifier;
    NSNumber * _interactionId;
    struct LNViewLocation { 
        double x; 
        double y; 
        double z; 
        double width; 
        double height; 
        double depth; 
    }  _location;
    long long  _structuredDataRepresentations;
}

@property (nonatomic, readonly) LNEntityIdentifier *identifier;
@property (nonatomic, readonly) NSNumber *interactionId;
@property (nonatomic, readonly) struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; } location;
@property (nonatomic, readonly) long long structuredDataRepresentations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 interactionId:(id)arg2 location:(struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)initWithIdentifier:(id)arg1 interactionId:(id)arg2 location:(struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 structuredDataRepresentations:(long long)arg4;
- (id)interactionId;
- (struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; })location;
- (long long)structuredDataRepresentations;

@end

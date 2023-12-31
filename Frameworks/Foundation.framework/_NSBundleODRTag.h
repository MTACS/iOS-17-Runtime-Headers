
@interface _NSBundleODRTag : NSObject <NSSecureCoding> {
    bool  _alwaysPreserved;
    double  _preservationPriority;
}

@property bool alwaysPreserved;
@property double preservationPriority;

+ (bool)supportsSecureCoding;

- (bool)alwaysPreserved;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)preservationPriority;
- (void)setAlwaysPreserved:(bool)arg1;
- (void)setPreservationPriority:(double)arg1;

@end

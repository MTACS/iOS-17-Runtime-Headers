
@interface LNViewAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    struct LNViewLocation { 
        double x; 
        double y; 
        double z; 
        double width; 
        double height; 
        double depth; 
    }  _location;
    long long  _viewIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; } location;
@property (nonatomic, readonly) long long viewIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 viewIdentifier:(long long)arg2 location:(struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)initWithCoder:(id)arg1;
- (struct LNViewLocation { double x1; double x2; double x3; double x4; double x5; double x6; })location;
- (long long)viewIdentifier;

@end

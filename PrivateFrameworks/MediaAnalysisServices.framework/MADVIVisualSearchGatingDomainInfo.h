
@interface MADVIVisualSearchGatingDomainInfo : NSObject <NSSecureCoding> {
    NSString * _displayLabel;
    NSString * _displayMessage;
    NSString * _domain;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focalPoint;
    NSString * _glyphName;
    bool  _hasFocalPoint;
    NSString * _label;
}

@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayMessage;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focalPoint;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) bool hasFocalPoint;
@property (nonatomic, readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayLabel;
- (id)displayMessage;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })focalPoint;
- (id)glyphName;
- (bool)hasFocalPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 label:(id)arg2 glyphName:(id)arg3 hasFocalPoint:(bool)arg4 focalPoint:(struct CGPoint { double x1; double x2; })arg5 displayLabel:(id)arg6 displayMessage:(id)arg7;
- (id)label;

@end

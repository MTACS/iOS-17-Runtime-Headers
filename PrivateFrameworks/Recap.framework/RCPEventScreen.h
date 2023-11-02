
@interface RCPEventScreen : NSObject <NSSecureCoding> {
    unsigned int  _displayID;
    NSString * _displayUUID;
    struct CGSize { 
        double width; 
        double height; 
    }  _pointSize;
    double  _scale;
}

@property (nonatomic) unsigned int displayID;
@property (nonatomic, copy) NSString *displayUUID;
@property (nonatomic) struct CGSize { double x1; double x2; } pointSize;
@property (nonatomic) double scale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)displayID;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })pointSize;
- (double)scale;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setDisplayUUID:(id)arg1;
- (void)setPointSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;

@end

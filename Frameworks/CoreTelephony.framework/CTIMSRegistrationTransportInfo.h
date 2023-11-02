
@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding> {
    int  _contextType;
    bool  _isRegistered;
    int  _transportType;
}

@property (nonatomic) int contextType;
@property (nonatomic) bool isRegistered;
@property (nonatomic) int transportType;

+ (bool)supportsSecureCoding;

- (int)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isRegistered;
- (void)setContextType:(int)arg1;
- (void)setIsRegistered:(bool)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;

@end

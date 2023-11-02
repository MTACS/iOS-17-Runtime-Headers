
@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding> {
    bool  _airplaneModeEnabled;
    bool  _cellularDataCapable;
    bool  _cellularDataEnabled;
}

@property (getter=isAirplaneModeEnabled, nonatomic) bool airplaneModeEnabled;
@property (getter=isCellularDataCapable, nonatomic) bool cellularDataCapable;
@property (getter=isCellularDataEnabled, nonatomic) bool cellularDataEnabled;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAirplaneModeEnabled;
- (bool)isCellularDataCapable;
- (bool)isCellularDataEnabled;
- (void)setAirplaneModeEnabled:(bool)arg1;
- (void)setCellularDataCapable:(bool)arg1;
- (void)setCellularDataEnabled:(bool)arg1;

@end

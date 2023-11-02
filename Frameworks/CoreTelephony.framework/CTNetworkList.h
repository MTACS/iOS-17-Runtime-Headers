
@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding> {
    bool  _moreComing;
    NSMutableArray * _networks;
}

@property (nonatomic) bool moreComing;
@property (nonatomic, retain) NSMutableArray *networks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)moreComing;
- (id)networks;
- (void)setMoreComing:(bool)arg1;
- (void)setNetworks:(id)arg1;

@end

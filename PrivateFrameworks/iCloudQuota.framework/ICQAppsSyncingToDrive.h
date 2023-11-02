
@interface ICQAppsSyncingToDrive : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _apps;
}

@property (nonatomic, retain) NSArray *apps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApps:(id)arg1;

@end

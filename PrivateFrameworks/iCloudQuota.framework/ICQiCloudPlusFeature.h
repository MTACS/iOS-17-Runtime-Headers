
@interface ICQiCloudPlusFeature : NSObject <NSCopying, NSSecureCoding> {
    ICQImageURL * _iconURL;
    NSString * _label;
    NSString * _sublabel;
}

@property (nonatomic, retain) ICQImageURL *iconURL;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *sublabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconURL;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setIconURL:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSublabel:(id)arg1;
- (id)sublabel;

@end

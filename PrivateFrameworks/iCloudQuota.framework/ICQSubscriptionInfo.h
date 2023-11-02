
@interface ICQSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _iCloudPlusSubscriber;
    NSArray * _specifiersInfo;
}

@property (getter=isiCloudPlusSubscriber, nonatomic) bool iCloudPlusSubscriber;
@property (nonatomic, retain) NSArray *specifiersInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isiCloudPlusSubscriber;
- (void)setICloudPlusSubscriber:(bool)arg1;
- (void)setSpecifiersInfo:(id)arg1;
- (id)specifiersInfo;

@end


@interface ICQAppInfo : NSObject <NSCopying, NSSecureCoding> {
    ICQActionInfo * _action;
    NSArray * _bundleIds;
    NSString * _detailLabel;
    NSString * _detailLabelColor;
    bool  _fetchLocally;
    ICQImageURL * _iconURL;
    NSString * _label;
}

@property (nonatomic, retain) ICQActionInfo *action;
@property (nonatomic, retain) NSArray *bundleIds;
@property (nonatomic, copy) NSString *detailLabel;
@property (nonatomic, copy) NSString *detailLabelColor;
@property (nonatomic) bool fetchLocally;
@property (nonatomic, retain) ICQImageURL *iconURL;
@property (nonatomic, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)bundleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailLabel;
- (id)detailLabelColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchLocally;
- (id)iconURL;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setAction:(id)arg1;
- (void)setBundleIds:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailLabelColor:(id)arg1;
- (void)setFetchLocally:(bool)arg1;
- (void)setIconURL:(id)arg1;
- (void)setLabel:(id)arg1;

@end

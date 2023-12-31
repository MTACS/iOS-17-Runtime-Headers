
@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification {
    ICQLink * _doneLink;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) ICQLink *doneLink;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)doneLink;
- (bool)hasCancelButtonForBack;
- (id)message;
- (id)pageIdentifier;
- (void)setDoneLink:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

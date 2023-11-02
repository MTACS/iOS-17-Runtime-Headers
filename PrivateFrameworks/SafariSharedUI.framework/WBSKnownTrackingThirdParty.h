
@interface WBSKnownTrackingThirdParty : WBSTrackingCapableThirdParty {
    NSString * _ownerName;
}

@property (nonatomic, copy) NSString *ownerName;

- (void).cxx_destruct;
- (id)ownerName;
- (void)setOwnerName:(id)arg1;
- (id)thirdPartyCoalescedWithThirdParty:(id)arg1;

@end

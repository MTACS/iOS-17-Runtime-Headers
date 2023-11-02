
@interface PKRecentContact : CRRecentContact {
    long long  _contactID;
}

@property (nonatomic) long long contactID;

- (long long)contactID;
- (void)setContactID:(long long)arg1;

@end

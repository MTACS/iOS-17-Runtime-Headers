
@interface CKContextDonation : NSObject <NSSecureCoding> {
    CKContextUserActivity * _associatedUserActivity;
    _Atomic bool  _donated;
    NSString * _donorBundleIdentifier;
    NSMutableArray * _items;
    unsigned long long  _nonce;
    unsigned long long  _remoteProcesses;
}

@property (nonatomic, retain) CKContextUserActivity *associatedUserActivity;
@property (nonatomic, readonly) NSString *donorBundleIdentifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) unsigned long long nonce;
@property unsigned long long remoteProcesses;

+ (id)establishServiceConnection;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_concatenatedRequestTextUsingDebugText:(bool)arg1;
- (void)addItem:(id)arg1;
- (id)associatedUserActivity;
- (id)concatenatedRequestsDebugText;
- (id)concatenatedRequestsText;
- (id)description;
- (void)donate;
- (id)donorBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDonations:(id)arg1 donorBundleIdentifier:(id)arg2;
- (id)initWithDonorBundleIdentifier:(id)arg1;
- (id)items;
- (unsigned long long)nonce;
- (unsigned long long)remoteProcesses;
- (void)setAssociatedUserActivity:(id)arg1;
- (void)setNonce:(unsigned long long)arg1;
- (void)setRemoteProcesses:(unsigned long long)arg1;

@end


@interface ML3AccountCacheEntry : NSObject {
    NSString * _altDSID;
    NSString * _appleID;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *appleID;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;

@end

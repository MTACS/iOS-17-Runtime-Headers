
@interface AMSFamilyAccountPair : NSObject {
    unsigned long long  _downloaderAccountID;
    unsigned long long  _familyID;
    unsigned long long  _purchaserAccountID;
}

@property (nonatomic, readonly) unsigned long long downloaderAccountID;
@property (nonatomic, readonly) unsigned long long familyID;
@property (nonatomic, readonly) unsigned long long purchaserAccountID;

- (unsigned long long)downloaderAccountID;
- (unsigned long long)familyID;
- (id)initWithDownloaderAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 familyID:(unsigned long long)arg3;
- (unsigned long long)purchaserAccountID;

@end


@interface SSVFamilyAccountPair : NSObject {
    unsigned long long  _downloaderAccountIdentifier;
    unsigned long long  _familyIdentifier;
    unsigned long long  _purchaserAccountIdentifier;
}

@property (nonatomic, readonly) unsigned long long downloaderAccountIdentifier;
@property (nonatomic, readonly) unsigned long long familyIdentifier;
@property (nonatomic, readonly) unsigned long long purchaserAccountIdentifier;

- (unsigned long long)downloaderAccountIdentifier;
- (unsigned long long)familyIdentifier;
- (id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3;
- (unsigned long long)purchaserAccountIdentifier;

@end

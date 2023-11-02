
@interface MKStorage : NSObject {
    unsigned long long  _availableSpaceInBytes;
    unsigned long long  _availableSpaceInGigabytes;
    unsigned long long  _availableSpaceInMegabytes;
    unsigned long long  _availableSpaceInTerabytes;
}

@property (nonatomic) unsigned long long availableSpaceInBytes;
@property (nonatomic) unsigned long long availableSpaceInGigabytes;
@property (nonatomic) unsigned long long availableSpaceInMegabytes;
@property (nonatomic) unsigned long long availableSpaceInTerabytes;

- (unsigned long long)availableSpaceInBytes;
- (unsigned long long)availableSpaceInGigabytes;
- (unsigned long long)availableSpaceInMegabytes;
- (unsigned long long)availableSpaceInTerabytes;
- (id)init;
- (void)setAvailableSpaceInBytes:(unsigned long long)arg1;
- (void)setAvailableSpaceInGigabytes:(unsigned long long)arg1;
- (void)setAvailableSpaceInMegabytes:(unsigned long long)arg1;
- (void)setAvailableSpaceInTerabytes:(unsigned long long)arg1;

@end

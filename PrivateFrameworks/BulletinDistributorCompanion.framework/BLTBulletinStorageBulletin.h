
@interface BLTBulletinStorageBulletin : NSObject {
    BBBulletin * _bulletin;
    unsigned long long  _contextSize;
}

@property (nonatomic, retain) BBBulletin *bulletin;
@property (nonatomic, readonly) unsigned long long contextSize;

- (void).cxx_destruct;
- (id)bulletin;
- (unsigned long long)contextSize;
- (void)setBulletin:(id)arg1;

@end

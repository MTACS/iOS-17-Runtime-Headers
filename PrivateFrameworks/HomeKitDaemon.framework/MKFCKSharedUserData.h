
@interface MKFCKSharedUserData : MKFCKModel {
    _MKFUser * _workingStoreUser;
}

@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;
+ (id)rootKeyPath;

- (void).cxx_destruct;
- (id)workingStoreUser;

@end

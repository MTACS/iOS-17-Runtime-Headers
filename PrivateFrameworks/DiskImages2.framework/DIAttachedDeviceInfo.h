
@interface DIAttachedDeviceInfo : NSObject {
    NSString * _BSDName;
    NSNumber * _blockSize;
    NSURL * _cacheURL;
    long long  _frameworkNum;
    NSURL * _imageURL;
    NSString * _instanceId;
    DIIOMedia * _ioMedia;
    NSNumber * _mediaSize;
    NSNumber * _pid;
    NSURL * _shadowURL;
}

@property (nonatomic, readonly, copy) NSString *BSDName;
@property (nonatomic, readonly) NSNumber *blockSize;
@property (nonatomic, readonly, copy) NSURL *cacheURL;
@property (nonatomic, readonly) long long frameworkNum;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *instanceId;
@property (nonatomic, retain) DIIOMedia *ioMedia;
@property (nonatomic, readonly) NSNumber *mediaSize;
@property (nonatomic, readonly) NSNumber *pid;
@property (nonatomic, readonly, copy) NSURL *shadowURL;

+ (id)DI1URLWithData:(id)arg1 error:(id*)arg2;
+ (id)copyAllMountPoints;
+ (id)newDI1DevicesArrayWithError:(id*)arg1;
+ (id)newDI2DevicesArrayWithError:(id*)arg1;
+ (id)newDevicesArrayWithError:(id*)arg1;
+ (id)newEntityDictWithIOMedia:(id)arg1 mountPoints:(id)arg2;

- (void).cxx_destruct;
- (id)BSDName;
- (id)blockSize;
- (id)cacheURL;
- (id)copyEntitiesList;
- (id)description;
- (bool)fillDI1InfoWithDevice:(id)arg1 error:(id*)arg2;
- (bool)fillDI2InfoWithDevice:(id)arg1 error:(id*)arg2;
- (long long)frameworkNum;
- (id)imageURL;
- (id)initWithBSDName:(id)arg1 error:(id*)arg2;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)instanceId;
- (id)ioMedia;
- (id)mediaSize;
- (id)pid;
- (bool)setDI2PIDWithDevice:(id)arg1 error:(id*)arg2;
- (void)setIoMedia:(id)arg1;
- (id)shadowURL;
- (id)toDictionary;

@end

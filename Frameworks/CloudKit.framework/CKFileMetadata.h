
@interface CKFileMetadata : NSObject <NSSecureCoding> {
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSNumber * _fileSize;
    NSNumber * _generationID;
    NSNumber * _modTimeInSeconds;
}

@property (nonatomic, readonly, copy) NSNumber *deviceID;
@property (nonatomic, readonly, copy) NSNumber *fileID;
@property (nonatomic, readonly, copy) NSNumber *fileSize;
@property (nonatomic, readonly, copy) NSNumber *generationID;
@property (nonatomic, readonly, copy) NSNumber *modTimeInSeconds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)fileSize;
- (id)generationID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 modTimeInSeconds:(id)arg4 fileSize:(id)arg5;
- (id)initWithFileSize:(id)arg1;
- (id)modTimeInSeconds;

@end

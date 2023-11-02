
@interface SKEraseDisk : NSObject <NSSecureCoding, SKEraseSubmitProtocol, SKValidateProtocol> {
    NSArray * _descriptors;
    SKDisk * _disk;
    NSDictionary * _diskRepresentation;
    bool  _forceUnmount;
    SKProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *descriptors;
@property (nonatomic, retain) SKDisk *disk;
@property (nonatomic, retain) NSDictionary *diskRepresentation;
@property (nonatomic) bool forceUnmount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKProgress *progress;
@property (readonly) Class superclass;

+ (id)eraseDiskWithRootDisk:(id)arg1 descriptors:(id)arg2 error:(id*)arg3;
+ (id)eraseDiskWithRootDisk:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptors;
- (id)disk;
- (id)diskRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eraseProgressReportingWithCompletionBlock:(id /* block */)arg1;
- (void)eraseWithCompletionBlock:(id /* block */)arg1;
- (bool)forceUnmount;
- (id)formattableFilesystems;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootDisk:(id)arg1 descriptors:(id)arg2 error:(id*)arg3;
- (id)progress;
- (void)setDescriptors:(id)arg1;
- (void)setDisk:(id)arg1;
- (void)setDiskRepresentation:(id)arg1;
- (void)setForceUnmount:(bool)arg1;
- (void)setProgress:(id)arg1;
- (id)validateWithError:(id*)arg1;

@end

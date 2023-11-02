
@interface HKSignedClinicalDataFile : NSObject <NSCopying, NSSecureCoding> {
    NSFileHandle * _fileHandle;
    NSURL * _fileURL;
    NSDictionary * _metadata;
    NSDate * _receivedDate;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly, copy) NSFileHandle *fileHandle;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSDate *receivedDate;
@property (nonatomic, readonly, copy) NSURL *sourceURL;

+ (id)signedClinicalDataFileWithURL:(id)arg1 sourceURL:(id)arg2 receivedDate:(id)arg3 countryOfOrigin:(id)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 fileHandle:(id)arg2 sourceURL:(id)arg3 receivedDate:(id)arg4 metadata:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)receivedDate;
- (id)sourceURL;

@end

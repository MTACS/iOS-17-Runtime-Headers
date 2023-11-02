
@interface REMFileAttachment : REMAttachment {
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    bool  _isTemporaryFileURL;
}

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic) bool isTemporaryFileURL;

+ (id)cdEntityName;
+ (id)createTemporaryFileURLWithUTI:(id)arg1;
+ (id)createTemporaryFileWithData:(id)arg1 UTI:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isTemporaryFileURL;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setIsTemporaryFileURL:(bool)arg1;

@end

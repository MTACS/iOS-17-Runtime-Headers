
@interface CKFileOpenResult : NSObject <NSSecureCoding> {
    NSFileHandle * _encryptedFileHandle;
    NSFileHandle * _fileHandle;
    NSNumber * _fileSize;
    struct _mkbbackupref { } * _handle;
}

@property (nonatomic, readonly) NSFileHandle *encryptedFileHandle;
@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, readonly, copy) NSNumber *fileSize;
@property (nonatomic, readonly) struct _mkbbackupref { }*handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFileHandle;
- (id)fileHandle;
- (id)fileSize;
- (struct _mkbbackupref { }*)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileHandle:(id)arg1 fileSize:(id)arg2;
- (id)initWithMobileKeyBagHandle:(struct _mkbbackupref { }*)arg1 path:(id)arg2 error:(id*)arg3;

@end

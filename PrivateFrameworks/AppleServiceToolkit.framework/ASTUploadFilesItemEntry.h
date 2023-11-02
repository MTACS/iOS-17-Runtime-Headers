
@interface ASTUploadFilesItemEntry : NSObject {
    NSString * _name;
    NSString * _pubKeyDigest;
    NSString * _sig;
    NSNumber * _size;
    NSString * _status;
    NSString * _uploadId;
    NSString * _uploadUrl;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *pubKeyDigest;
@property (nonatomic, retain) NSString *sig;
@property (nonatomic, retain) NSNumber *size;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSString *uploadId;
@property (nonatomic, retain) NSString *uploadUrl;

- (void).cxx_destruct;
- (id)initWithId:(id)arg1 andName:(id)arg2 andSig:(id)arg3 andPubKeyDigest:(id)arg4 andStatus:(id)arg5 andSize:(id)arg6 andUploadUrl:(id)arg7;
- (id)name;
- (id)pubKeyDigest;
- (void)setName:(id)arg1;
- (void)setPubKeyDigest:(id)arg1;
- (void)setSig:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setUploadId:(id)arg1;
- (void)setUploadUrl:(id)arg1;
- (id)sig;
- (id)size;
- (id)status;
- (id)uploadId;
- (id)uploadUrl;

@end

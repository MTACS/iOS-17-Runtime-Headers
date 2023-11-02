
@interface MKMessageAttachment : NSObject {
    NSString * _ID;
    NSString * _UUID;
    NSString * _contentType;
    NSData * _data;
    NSString * _filename;
    long long  _transferState;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic) long long transferState;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)ID;
- (id)UUID;
- (id)contentType;
- (id)data;
- (id)filename;
- (id)initWithID:(id)arg1 contentType:(id)arg2 base64Data:(id)arg3;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setID:(id)arg1;
- (void)setTransferState:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (long long)transferState;
- (id)uniformTypeIdentifier;
- (void)write;

@end

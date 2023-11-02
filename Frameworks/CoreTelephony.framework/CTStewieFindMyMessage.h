
@interface CTStewieFindMyMessage : NSObject <CTStewieMessageOutgoing> {
    NSData * _encryptedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encryptedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFindMyMessage:(id)arg1;
- (void)setEncryptedData:(id)arg1;

@end

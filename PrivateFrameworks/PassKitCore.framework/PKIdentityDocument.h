
@interface PKIdentityDocument : NSObject {
    DIIdentityDocument * _wrapped;
}

@property (nonatomic, readonly) NSData *encryptedData;
@property (nonatomic, retain) DIIdentityDocument *wrapped;

- (void).cxx_destruct;
- (id)description;
- (id)encryptedData;
- (id)initWithDIIdentityDocument:(id)arg1;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end

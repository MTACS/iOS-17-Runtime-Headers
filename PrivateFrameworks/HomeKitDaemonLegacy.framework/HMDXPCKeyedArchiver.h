
@interface HMDXPCKeyedArchiver : HMFObject {
    NSKeyedArchiver * _archiver;
}

@property (nonatomic, readonly) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;

+ (void*)XPCTransportTypeAssociationKey;

- (void).cxx_destruct;
- (void)_configure;
- (id)archiver;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithMessage:(id)arg1;

@end

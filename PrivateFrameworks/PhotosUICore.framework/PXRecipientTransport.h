
@interface PXRecipientTransport : NSObject <NSCopying> {
    NSString * _address;
    long long  _addressKind;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly) long long addressKind;

+ (id)new;

- (void).cxx_destruct;
- (id)address;
- (long long)addressKind;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end

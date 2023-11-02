
@interface SPRVASResponse : NSObject <NSSecureCoding> {
    NSData * _mobileToken;
    unsigned short  _status;
    NSData * _vasData;
}

@property (nonatomic, readonly, copy) NSData *mobileToken;
@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly, copy) NSData *vasData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned short)arg1 vasData:(id)arg2 mobileToken:(id)arg3;
- (id)mobileToken;
- (unsigned short)status;
- (id)vasData;

@end

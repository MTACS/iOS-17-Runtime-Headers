
@interface NFCVASResponse : NSObject <NSCopying> {
    NSData * _mobileToken;
    long long  _status;
    NSData * _vasData;
}

@property (nonatomic, readonly, retain) NSData *mobileToken;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, retain) NSData *vasData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStatus:(long long)arg1 data:(id)arg2 mobileToken:(id)arg3;
- (id)mobileToken;
- (long long)status;
- (id)vasData;

@end

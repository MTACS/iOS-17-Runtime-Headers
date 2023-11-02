
@interface AMSAbsintheSession : NSObject {
    int (* _PSCHelloV4Override;
    NSString * _servKey;
    struct PSCSessionInternal_ { } * _sessionRef;
}

@property (nonatomic) int (*PSCHelloV4Override;
@property (nonatomic, retain) NSString *servKey;
@property (nonatomic) struct PSCSessionInternal_ { }*sessionRef;

+ (id)defaultSession;

- (void).cxx_destruct;
- (int (*)PSCHelloV4Override;
- (bool)_prepareContextWithBag:(id)arg1 error:(id*)arg2;
- (bool)clearSession;
- (id)init;
- (id)servKey;
- (struct PSCSessionInternal_ { }*)sessionRef;
- (void)setPSCHelloV4Override:(int (*)arg1;
- (void)setServKey:(id)arg1;
- (void)setSessionRef:(struct PSCSessionInternal_ { }*)arg1;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (bool)verifyData:(id)arg1 bag:(id)arg2 error:(id*)arg3;

@end

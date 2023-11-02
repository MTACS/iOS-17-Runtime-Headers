
@interface TKTokenWatcherTokenInfo : NSObject {
    NSString * _driverName;
    NSString * _slotName;
    NSString * _tokenID;
}

@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic, readonly) NSString *slotName;
@property (nonatomic, readonly) NSString *tokenID;

- (void).cxx_destruct;
- (id)driverName;
- (id)initWithTokenInfo:(id)arg1;
- (id)slotName;
- (id)tokenID;

@end

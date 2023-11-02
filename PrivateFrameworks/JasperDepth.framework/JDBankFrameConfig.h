
@interface JDBankFrameConfig : NSObject {
    int  _bankId;
    NSData * _frameConfig;
}

@property (readonly) int bankId;
@property (readonly) NSData *frameConfig;

- (void).cxx_destruct;
- (int)bankId;
- (id)frameConfig;
- (id)initWithBankId:(int)arg1 andFrameConfig:(id)arg2;

@end

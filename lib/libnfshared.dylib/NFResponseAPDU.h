
@interface NFResponseAPDU : NSObject {
    NSData * _data;
    unsigned short  _status;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSData *response;
@property (nonatomic, readonly) unsigned short status;

+ (id)responseWithData:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (unsigned short)decodeUnderlyingAppletError:(id*)arg1;
- (id)initWithData:(id)arg1;
- (id)response;
- (unsigned short)status;

@end

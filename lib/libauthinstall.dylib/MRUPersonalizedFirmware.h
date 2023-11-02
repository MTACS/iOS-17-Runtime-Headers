
@interface MRUPersonalizedFirmware : NSObject {
    NSData * _manifest;
    NSData * _payload;
}

@property (readonly) NSData *manifest;
@property (readonly) NSData *payload;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)arg1 manifest:(id)arg2;
- (id)manifest;
- (id)payload;

@end

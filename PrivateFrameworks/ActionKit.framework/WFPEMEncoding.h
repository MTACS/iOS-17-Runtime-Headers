
@interface WFPEMEncoding : NSObject {
    NSData * _data;
    NSString * _type;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *type;

+ (id)decodePEM:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)encodedPEM;
- (id)initWithType:(id)arg1 data:(id)arg2;
- (void)setData:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

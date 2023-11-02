
@interface ICSidecarServiceMenuItem : NSObject {
    void data;
    void type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)data;
- (id)init;
- (id)initWithType:(id)arg1 data:(id)arg2;
- (id)type;

@end

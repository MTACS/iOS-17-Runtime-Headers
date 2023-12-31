
@interface CATAddress : NSObject {
    NSString * _address;
    NSData * _data;
}

@property (nonatomic, readonly) NSString *address;
@property (getter=isAny, nonatomic, readonly) bool any;
@property (nonatomic, readonly) NSData *data;
@property (getter=isLocalWiFi, nonatomic, readonly) bool localWiFi;

+ (id)any;
+ (id)localWiFi;

- (void).cxx_destruct;
- (id)address;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isAny;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddress:(id)arg1;
- (bool)isLocalWiFi;

@end

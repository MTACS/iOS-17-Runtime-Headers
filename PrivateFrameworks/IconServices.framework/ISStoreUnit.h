
@interface ISStoreUnit : NSObject {
    NSUUID * _UUID;
    NSData * _data;
}

@property (readonly) NSUUID *UUID;
@property (readonly) NSData *data;

+ (id)storeUnitWithData:(id)arg1;
+ (id)storeUnitWithStoreURL:(id)arg1 UUID:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)data;
- (id)initWithData:(id)arg1 UUID:(id)arg2;
- (bool)isValid;
- (void)remapWithStoreURL:(id)arg1;

@end


@interface TSDMPSImageConversionStorage : NSObject {
    NSMapTable * _storage;
}

@property (nonatomic, readonly) NSMapTable *storage;

- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;
- (id)storage;

@end

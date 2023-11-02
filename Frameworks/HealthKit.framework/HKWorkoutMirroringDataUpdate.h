
@interface HKWorkoutMirroringDataUpdate : NSObject {
    NSUUID * _UUID;
    id /* block */  _completionHandler;
    NSData * _data;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) NSData *data;

- (void).cxx_destruct;
- (id)UUID;
- (id /* block */)completionHandler;
- (id)data;
- (id)initWithData:(id)arg1 completion:(id /* block */)arg2;

@end

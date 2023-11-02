
@interface CryptexRemoteObjectArray : NSObject {
    NSArray * _array;
}

@property (nonatomic, readonly) NSArray *array;

- (void).cxx_destruct;
- (id)array;
- (id)initWithArray:(id)arg1;

@end

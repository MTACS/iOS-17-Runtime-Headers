
@interface TCNamedData : NSObject {
    NSData * mData;
    NSString * mName;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *name;

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1 named:(id)arg2;
- (id)name;

@end

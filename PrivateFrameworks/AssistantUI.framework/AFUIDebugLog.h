
@interface AFUIDebugLog : NSObject {
    NSData * _data;
    NSString * _mimeType;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(bool)arg4;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(bool)arg4;
- (id)mimeType;
- (id)name;

@end

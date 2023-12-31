
@interface NUEmbedConfigurationOperationResult : NSObject {
    NSData * _data;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)data;
- (id)identifier;
- (id)initWithData:(id)arg1 idenfifier:(id)arg2;

@end

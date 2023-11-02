
@interface MusicKit_SoftLinking_CatalogID : NSObject {
    long long  _kind;
    NSString * _value;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1 kind:(long long)arg2;
- (long long)kind;
- (id)value;

@end

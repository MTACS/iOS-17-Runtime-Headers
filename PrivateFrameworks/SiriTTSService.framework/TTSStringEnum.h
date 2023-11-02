
@interface TTSStringEnum : NSObject {
    NSString * _string;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)string;

@end

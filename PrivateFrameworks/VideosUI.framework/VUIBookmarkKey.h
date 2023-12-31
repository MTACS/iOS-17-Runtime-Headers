
@interface VUIBookmarkKey : NSObject {
    NSString * _identifier;
    long long  _keyType;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long keyType;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 keyType:(long long)arg2;
- (long long)keyType;

@end

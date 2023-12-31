
@interface _PUDisabledUserInteractionToken : NSObject {
    NSString * _identifier;
    long long  _reason;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long reason;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (long long)reason;
- (void)setIdentifier:(id)arg1;
- (void)setReason:(long long)arg1;

@end

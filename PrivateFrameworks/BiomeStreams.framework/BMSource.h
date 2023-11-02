
@interface BMSource : NSObject <BMSourceProtocol> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)new;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;

@end

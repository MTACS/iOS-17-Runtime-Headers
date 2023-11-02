
@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject {
    NSData * _infoData;
    NSString * _name;
    NSData * _saltData;
}

@property (nonatomic, readonly) NSData *infoData;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *saltData;

+ (id)new;

- (void).cxx_destruct;
- (id)infoData;
- (id)init;
- (id)initWithName:(id)arg1 saltData:(id)arg2 infoData:(id)arg3;
- (id)name;
- (id)saltData;

@end

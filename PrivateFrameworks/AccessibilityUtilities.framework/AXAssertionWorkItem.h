
@interface AXAssertionWorkItem : NSObject {
    bool  _acquire;
    NSString * _identifier;
    unsigned long long  _retries;
    NSString * _type;
}

@property (nonatomic, readonly) bool acquire;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long retries;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (bool)acquire;
- (id)identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(bool)arg3;
- (unsigned long long)retries;
- (void)setRetries:(unsigned long long)arg1;
- (id)type;

@end


@interface SWSession : NSObject <SWSession> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;

@end

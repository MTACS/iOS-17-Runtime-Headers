
@interface POSOAPEnvelope : NSObject <POXSDefinitionProvider> {
    NSArray * _Body;
    NSArray * _Header;
}

@property (nonatomic, copy) NSArray *Body;
@property (nonatomic, copy) NSArray *Header;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Body;
- (id)Header;
- (id)description;
- (void)setBody:(id)arg1;
- (void)setHeader:(id)arg1;

@end

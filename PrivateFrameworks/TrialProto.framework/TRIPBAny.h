
@interface TRIPBAny : TRIPBMessage

@property (nonatomic, copy) NSString *typeURL;
@property (nonatomic, copy) NSData *value;

+ (id)anyWithMessage:(id)arg1 error:(id*)arg2;
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3;
+ (id)descriptor;

- (id)initWithMessage:(id)arg1 error:(id*)arg2;
- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3;
- (bool)packWithMessage:(id)arg1 error:(id*)arg2;
- (bool)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3;
- (id)unpackMessageClass:(Class)arg1 error:(id*)arg2;

@end

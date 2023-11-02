
@interface MGRemoteQueryReply : NSObject <MGRemoteQueryDecodable> {
    NSError * _error;
    NSArray * _groups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)replyWithError:(id)arg1;
+ (id)replyWithGroups:(id)arg1;
+ (id)rq_instanceFromCoded:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithGroups:(id)arg1 error:(id)arg2;
- (id)description;
- (id)error;
- (id)groups;
- (id)rq_coded;

@end

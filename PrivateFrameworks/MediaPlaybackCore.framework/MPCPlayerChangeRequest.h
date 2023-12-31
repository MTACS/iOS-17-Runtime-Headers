
@interface MPCPlayerChangeRequest : NSObject {
    NSArray * _commands;
    unsigned long long  _options;
}

@property (nonatomic, retain) NSArray *commands;
@property (nonatomic) unsigned long long options;

+ (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)performRequest:(id)arg1 extendedStatusCompletion:(id /* block */)arg2;
+ (void)performRequest:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)performRequest:(id)arg1 options:(unsigned long long)arg2 extendedStatusCompletion:(id /* block */)arg3;
+ (id)requestWithCommandRequests:(id)arg1;

- (void).cxx_destruct;
- (id)commands;
- (id)description;
- (id)initWithCommandRequests:(id)arg1;
- (unsigned long long)options;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)performWithExtendedStatusCompletion:(id /* block */)arg1;
- (void)setCommands:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end

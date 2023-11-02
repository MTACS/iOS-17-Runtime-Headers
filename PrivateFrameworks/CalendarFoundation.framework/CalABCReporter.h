
@interface CalABCReporter : NSObject {
    NSArray * _events;
    bool  _ignoreRateLimiting;
    NSString * _subtype;
    NSString * _subtypeContext;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) bool ignoreRateLimiting;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *subtypeContext;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)domain;
- (id)events;
- (bool)ignoreRateLimiting;
- (id)initWithType:(id)arg1 subtype:(id)arg2 context:(id)arg3;
- (bool)rateLimitingAllowsABCReport;
- (void)report;
- (void)report:(bool)arg1;
- (void)reportSynchronous;
- (void)setEvents:(id)arg1;
- (void)setIgnoreRateLimiting:(bool)arg1;
- (void)setSubtype:(id)arg1;
- (void)setSubtypeContext:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)subtypeContext;
- (id)type;

@end

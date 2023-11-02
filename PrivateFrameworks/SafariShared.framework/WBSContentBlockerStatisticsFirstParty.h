
@interface WBSContentBlockerStatisticsFirstParty : NSObject {
    NSString * _domain;
    double  _lastSeen;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) double lastSeen;

- (void).cxx_destruct;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 lastSeen:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)lastSeen;

@end

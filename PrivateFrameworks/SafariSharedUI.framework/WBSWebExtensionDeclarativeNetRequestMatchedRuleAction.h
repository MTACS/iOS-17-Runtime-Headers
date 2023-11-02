
@interface WBSWebExtensionDeclarativeNetRequestMatchedRuleAction : NSObject {
    double  _tabID;
    NSDate * _time;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, readonly) double tabID;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTabID:(double)arg1 type:(long long)arg2 url:(id)arg3;
- (double)tabID;
- (id)time;
- (long long)type;
- (id)url;

@end

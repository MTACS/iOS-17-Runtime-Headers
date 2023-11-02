
@interface _SWCTrackingDomainInfo : NSObject <NSSecureCoding> {
    NSDictionary * _JSONObject;
    NSString * _domain;
}

@property (readonly) bool canBlockRequest;
@property (readonly) NSString *domain;
@property (readonly) NSString *ownerDisplayName;
@property (readonly) NSString *ownerName;
@property (readonly) unsigned long long source;

+ (void)_getTrackingDomainInfoWithDomains:(id)arg1 sources:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)_queue;
+ (id)_trackingDomainInfoWithDomain:(id)arg1 JSONObject:(id)arg2;
+ (id)_trackingDomainInfoWithDomain:(id)arg1 JSONObject:(id)arg2 expectedSources:(unsigned long long)arg3;
+ (id)_trackingDomainInfoWithDomains:(id)arg1;
+ (id)_trackingDomainInfoWithDomains:(id)arg1 sources:(unsigned long long)arg2;
+ (void)getTrackingDomainInfoWithDomains:(id)arg1 sources:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (id)lastDatabaseUpdate;
+ (id)new;
+ (bool)supportsSecureCoding;
+ (id)trackingDomainInfoWithDomains:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 JSONObject:(id)arg2;
- (bool)canBlockRequest;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)ownerDisplayName;
- (id)ownerName;
- (unsigned long long)source;

@end

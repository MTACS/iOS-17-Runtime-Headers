
@interface MISProfile : NSObject {
    bool  _fixedup;
    struct CEQueryContext { } * ceCtx;
    NSArray * certs;
    NSData * derEntitlementsStorage;
    NSDictionary * entitlements;
    int  flavor;
    NSMutableDictionary * payload;
    NSData * signature;
}

@property (copy) NSArray *certs;
@property (readonly) struct CEQueryContext { }*derEntitlements;
@property (copy) NSDictionary *entitlements;
@property int flavor;
@property (retain) NSMutableDictionary *payload;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)certs;
- (void)dealloc;
- (struct CEQueryContext { }*)derEntitlements;
- (id)entitlements;
- (int)fixUp;
- (int)flavor;
- (id)init;
- (id)payload;
- (void)setCerts:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setFlavor:(int)arg1;
- (void)setPayload:(id)arg1;
- (id)uuid;

@end


@interface WFContentAttributionTracker : NSObject <NSSecureCoding> {
    NSMutableDictionary * _attributionSets;
    NSObject<OS_dispatch_queue> * _trackingAttributionSetQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *attributionSets;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *trackingAttributionSetQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttributionSet:(id)arg1 forParameter:(id)arg2;
- (id)attributionSetForParameter:(id)arg1;
- (id)attributionSets;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAttributionSets:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)replaceAttributionSet:(id)arg1 forParameter:(id)arg2;
- (id)trackedAttributionSet;
- (id)trackingAttributionSetQueue;

@end

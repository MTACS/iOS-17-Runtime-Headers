
@interface ATXExpiredData : NSObject {
    NSSet * _expiredActionKeys;
    NSSet * _expiredBundleIds;
}

@property (nonatomic, readonly) NSSet *expiredActionKeys;
@property (nonatomic, readonly) NSSet *expiredBundleIds;

- (void).cxx_destruct;
- (id)expiredActionKeys;
- (id)expiredBundleIds;
- (id)init;
- (id)initWithExpiredBundleIds:(id)arg1 expiredActionKeys:(id)arg2;

@end

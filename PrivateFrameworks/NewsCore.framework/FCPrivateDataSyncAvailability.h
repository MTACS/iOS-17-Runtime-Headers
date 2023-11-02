
@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability> {
    NSArray * _conditions;
}

@property (nonatomic, readonly, copy) NSArray *conditions;
@property (getter=isPrivateDataSyncingAllowed, nonatomic, readonly) bool privateDataSyncingAllowed;

+ (id)defaultAvailability;
+ (id)notAvailable;

- (void).cxx_destruct;
- (id)conditions;
- (id)initWithConditions:(id)arg1;
- (bool)isPrivateDataSyncingAllowed;

@end


@interface APPCTapAction : NSObject <APPCPromotableTapAction> {
    void actionType;
    void confirmedClickInterval;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) double confirmedClickInterval;

+ (id)actionFor:(id)arg1;

- (long long)actionType;
- (double)confirmedClickInterval;
- (id)init;
- (id)initWithActionType:(long long)arg1 confirmedClickInterval:(double)arg2;
- (void)performActionWithCompletion:(id /* block */)arg1;

@end

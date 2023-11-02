
@interface ICASActionMenuData : NSObject <AADataEventType> {
    ICASActionMenuContextType * _actionMenuContextType;
    NSString * _actionMenuSelection;
    ICASActionMenuUsageType * _actionMenuUsageType;
}

@property (nonatomic, readonly) ICASActionMenuContextType *actionMenuContextType;
@property (nonatomic, readonly) NSString *actionMenuSelection;
@property (nonatomic, readonly) ICASActionMenuUsageType *actionMenuUsageType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)actionMenuContextType;
- (id)actionMenuSelection;
- (id)actionMenuUsageType;
- (id)initWithActionMenuUsageType:(id)arg1 actionMenuContextType:(id)arg2 actionMenuSelection:(id)arg3;
- (id)toDict;

@end

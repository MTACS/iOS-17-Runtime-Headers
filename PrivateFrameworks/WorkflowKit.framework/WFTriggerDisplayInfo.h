
@interface WFTriggerDisplayInfo : NSObject {
    NSArray * _actionIcons;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    Class  _triggerClass;
}

@property (nonatomic, readonly) NSArray *actionIcons;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) Class triggerClass;

- (void).cxx_destruct;
- (id)actionIcons;
- (id)initWithLocalizedTitle:(id)arg1 localizedDescription:(id)arg2 actionIcons:(id)arg3 triggerClass:(Class)arg4;
- (id)localizedDescription;
- (id)localizedTitle;
- (Class)triggerClass;

@end

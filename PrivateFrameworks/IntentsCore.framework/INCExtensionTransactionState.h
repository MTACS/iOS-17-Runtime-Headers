
@interface INCExtensionTransactionState : NSObject {
    INIntent * _intent;
    INIntentResponse * _intentResponse;
    long long  _type;
    NSSet * _userActivities;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentResponse *intentResponse;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSSet *userActivities;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4;
- (id)intent;
- (id)intentResponse;
- (long long)type;
- (id)userActivities;

@end

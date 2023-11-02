
@interface CNCustomCardAction : NSObject {
    NSString * _contactIdentifier;
    bool  _destructive;
    id /* block */  _menuProvider;
    long long  _placement;
    CNContactTargetActionWrapper * _targetActionWrapper;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (getter=isDestructive, nonatomic, readonly) bool destructive;
@property (nonatomic, readonly) id /* block */ menuProvider;
@property (nonatomic, readonly) long long placement;
@property (nonatomic, readonly) CNContactTargetActionWrapper *targetActionWrapper;
@property (nonatomic, readonly) NSString *title;

+ (id)groupForActionGivenPlacement:(long long)arg1 inContactContentViewController:(id)arg2;
+ (long long)placementForGroup:(id)arg1 inContactContentViewController:(id)arg2;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)initWithTitle:(id)arg1 targetActionWrapper:(id)arg2 contactIdentifier:(id)arg3 placement:(long long)arg4 isDestructive:(bool)arg5 menuProvider:(id /* block */)arg6;
- (bool)isDestructive;
- (bool)isValidForContact:(id)arg1;
- (bool)matchesTarget:(id)arg1 selector:(SEL)arg2 group:(id)arg3 inContactContentViewController:(id)arg4;
- (id /* block */)menuProvider;
- (long long)placement;
- (id)targetActionWrapper;
- (id)title;

@end

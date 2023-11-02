
@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer> {
    NSDictionary * _actionViewsByActionType;
}

@property (nonatomic, readonly) NSDictionary *actionViewsByActionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)actionViewsByActionType;
- (id)initWithActionTypes:(id)arg1;
- (id)viewForActionType:(id)arg1;

@end


@interface CPAlertTemplate : CPTemplate <CPAlertDelegate> {
    NSArray * _actions;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <CPAlertDelegate> *templateDelegate;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

+ (unsigned long long)maximumActionCount;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 actions:(id)arg2;
- (id)titleVariants;

@end

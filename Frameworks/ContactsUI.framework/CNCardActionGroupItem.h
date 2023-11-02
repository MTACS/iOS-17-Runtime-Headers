
@interface CNCardActionGroupItem : CNCardGroupItem {
    NSMutableArray * _actions;
}

@property (nonatomic, readonly) NSArray *actions;

+ (id)actionGroupItemWithAction:(id)arg1;
+ (id)actionGroupItemWithActions:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (Class)cellClass;
- (id)init;
- (id)initWithAction:(id)arg1;

@end

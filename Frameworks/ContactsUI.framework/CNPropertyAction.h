
@interface CNPropertyAction : CNContactAction {
    NSArray * _propertyItems;
}

@property (nonatomic) <CNPropertyActionDelegate> *delegate;
@property (nonatomic, readonly) CNPropertyGroupItem *propertyItem;
@property (nonatomic, copy) NSArray *propertyItems;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (id)propertyItem;
- (id)propertyItems;
- (void)setPropertyItems:(id)arg1;

@end


@interface AVCustomRoutingActionItem : NSObject {
    NSString * _identifier;
    NSString * _overrideTitle;
    UTType * _type;
}

@property (nonatomic, copy) NSString *overrideTitle;
@property (nonatomic, copy) UTType *type;

- (void)dealloc;
- (id)identifier;
- (id)init;
- (id)overrideTitle;
- (void)setIdentifier:(id)arg1;
- (void)setOverrideTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

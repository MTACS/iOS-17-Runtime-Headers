
@interface CNTestQuickActionView : UIView <CNContactQuickActionPresentation> {
    bool  _enabled;
    NSMutableArray * _statesAssigned;
    NSString * _title;
    NSMutableArray * _titlesAssigned;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *statesAssigned;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSMutableArray *titlesAssigned;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)statesAssigned;
- (id)title;
- (id)titlesAssigned;

@end

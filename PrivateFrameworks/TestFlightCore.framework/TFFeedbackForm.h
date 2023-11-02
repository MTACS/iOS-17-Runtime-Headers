
@interface TFFeedbackForm : NSObject {
    NSArray * _entryGroups;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *entryGroups;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)entryGroups;
- (id)initWithTitle:(id)arg1 entryGroups:(id)arg2;
- (id)title;

@end

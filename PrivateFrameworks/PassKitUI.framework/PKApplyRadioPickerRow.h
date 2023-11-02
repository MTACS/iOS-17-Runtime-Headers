
@interface PKApplyRadioPickerRow : NSObject <PKApplyCollectionViewRow> {
    id /* block */  _action;
    bool  _selected;
    NSString * _submissionValue;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)action;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)identifier;
- (id)initWithTitle:(id)arg1 submissionValue:(id)arg2;
- (bool)selected;
- (void)setAction:(id /* block */)arg1;
- (void)setSelected:(bool)arg1;

@end


@interface PKApplyPrimaryActionRow : NSObject <PKApplyCollectionViewRow> {
    id /* block */  _action;
    bool  _loading;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool loading;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)action;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)identifier;
- (id)initWithTitle:(id)arg1;
- (bool)loading;
- (void)setAction:(id /* block */)arg1;
- (void)setLoading:(bool)arg1;

@end

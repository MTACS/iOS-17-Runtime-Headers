
@interface SWHighlightContextMenu : NSObject {
    id /* block */  _actionBlock;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)identifier;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

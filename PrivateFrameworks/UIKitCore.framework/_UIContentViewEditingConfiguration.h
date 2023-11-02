
@interface _UIContentViewEditingConfiguration : NSObject <NSCopying> {
    id /* block */  _didEndHandler;
    bool  _selectAllTextWhenEditingBegins;
    id /* block */  _shouldBeginHandler;
    id /* block */  _shouldChangeHandler;
    id /* block */  _shouldEndHandler;
    bool  _useTextInputAsLabel;
}

@property (nonatomic, readonly, copy) id /* block */ didEndHandler;
@property (nonatomic) bool selectAllTextWhenEditingBegins;
@property (nonatomic, copy) id /* block */ shouldBeginHandler;
@property (nonatomic, copy) id /* block */ shouldChangeHandler;
@property (nonatomic, copy) id /* block */ shouldEndHandler;
@property (nonatomic) bool useTextInputAsLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)didEndHandler;
- (id)initWithDidEndHandler:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (bool)selectAllTextWhenEditingBegins;
- (void)setSelectAllTextWhenEditingBegins:(bool)arg1;
- (void)setShouldBeginHandler:(id /* block */)arg1;
- (void)setShouldChangeHandler:(id /* block */)arg1;
- (void)setShouldEndHandler:(id /* block */)arg1;
- (void)setUseTextInputAsLabel:(bool)arg1;
- (id /* block */)shouldBeginHandler;
- (id /* block */)shouldChangeHandler;
- (id /* block */)shouldEndHandler;
- (bool)useTextInputAsLabel;

@end

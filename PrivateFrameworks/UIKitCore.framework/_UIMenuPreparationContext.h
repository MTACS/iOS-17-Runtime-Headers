
@interface _UIMenuPreparationContext : NSObject <NSCopying> {
    <UIDeferredMenuElementDelegate> * _deferredElementDelegate;
    id /* block */  _elementSizeSolver;
    UIResponder * _firstResponderTarget;
    id  _preparer;
    id  _sender;
    bool  _supportsCustomViewMenuElements;
    bool  _supportsHeaderView;
    bool  _tracksSelection;
    bool  _useSenderAsResponderSender;
}

@property (nonatomic) <UIDeferredMenuElementDelegate> *deferredElementDelegate;
@property (nonatomic, copy) id /* block */ elementSizeSolver;
@property (nonatomic, readonly) UIResponder *firstResponderTarget;
@property (nonatomic, readonly) id preparer;
@property (nonatomic) id sender;
@property (nonatomic) bool supportsCustomViewMenuElements;
@property (nonatomic) bool supportsHeaderView;
@property (nonatomic) bool tracksSelection;
@property (nonatomic) bool useSenderAsResponderSender;

+ (id)contextWithPreparer:(id)arg1 firstResponderTarget:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredElementDelegate;
- (id /* block */)elementSizeSolver;
- (id)firstResponderTarget;
- (id)preparer;
- (id)sender;
- (void)setDeferredElementDelegate:(id)arg1;
- (void)setElementSizeSolver:(id /* block */)arg1;
- (void)setSender:(id)arg1;
- (void)setSupportsCustomViewMenuElements:(bool)arg1;
- (void)setSupportsHeaderView:(bool)arg1;
- (void)setTracksSelection:(bool)arg1;
- (void)setUseSenderAsResponderSender:(bool)arg1;
- (bool)supportsCustomViewMenuElements;
- (bool)supportsHeaderView;
- (bool)tracksSelection;
- (bool)useSenderAsResponderSender;

@end

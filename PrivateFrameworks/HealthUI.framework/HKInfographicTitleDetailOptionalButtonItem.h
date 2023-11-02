
@interface HKInfographicTitleDetailOptionalButtonItem : NSObject <HKInfographicItem> {
    id /* block */  _buttonAction;
    NSString * _buttonTextString;
    NSString * _detailString;
    NSString * _titleString;
}

@property (nonatomic, readonly, copy) id /* block */ buttonAction;
@property (nonatomic, readonly, copy) NSString *buttonTextString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *detailString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *titleString;

- (void).cxx_destruct;
- (id /* block */)buttonAction;
- (id)buttonTextString;
- (id)detailString;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 buttonTextString:(id)arg3 buttonAction:(id /* block */)arg4;
- (id)titleString;

@end

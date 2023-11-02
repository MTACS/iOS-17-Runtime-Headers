
@interface AAOBBulletPointModel : NSObject <AAOBBulletPointModelProtocol> {
    NSString * _description;
    NSString * _symbolName;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSymbolNamed:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)setDescription:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)symbolName;
- (id)title;

@end

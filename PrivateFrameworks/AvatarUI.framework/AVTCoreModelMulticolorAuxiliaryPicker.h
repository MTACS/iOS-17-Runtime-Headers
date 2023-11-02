
@interface AVTCoreModelMulticolorAuxiliaryPicker : NSObject {
    NSArray * _items;
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 items:(id)arg2;
- (id)items;
- (void)setType:(id)arg1;
- (id)type;

@end

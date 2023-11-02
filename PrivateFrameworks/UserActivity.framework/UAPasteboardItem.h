
@interface UAPasteboardItem : NSObject {
    NSArray * _types;
}

@property (nonatomic, copy) NSArray *types;

- (void).cxx_destruct;
- (void)addType:(id)arg1;
- (id)description;
- (id)init;
- (void)setTypes:(id)arg1;
- (id)types;

@end

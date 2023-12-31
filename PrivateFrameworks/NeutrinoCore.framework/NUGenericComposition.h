
@interface NUGenericComposition : NUComposition {
    NSMutableDictionary * _contents;
}

@property (nonatomic, copy) NSDictionary *contents;

- (void).cxx_destruct;
- (id)contents;
- (id)initWithCompositionSchema:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end


@interface _FPItemDecorationValueResolver : NSObject {
    FPItem * _item;
    unsigned long long  _style;
}

+ (id)resolverForItem:(id)arg1 style:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)fp_valueForKey:(id)arg1;
- (id)fp_valueForKeyPath:(id)arg1;
- (id)initWithItem:(id)arg1 style:(unsigned long long)arg2;

@end

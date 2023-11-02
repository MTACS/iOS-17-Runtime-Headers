
@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary * mColors;
    NSString * mName;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (void)addColor:(id)arg1 index:(int)arg2;
- (unsigned long long)colorCount;
- (id)colorForIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)setName:(id)arg1;
- (void)validateColorScheme;

@end

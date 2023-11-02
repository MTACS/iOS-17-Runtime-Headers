
@interface IPRepeatedFieldValue : NSObject <NSCopying> {
    NSMutableArray * _values;
}

@property (nonatomic, readonly) NSMutableArray *values;

+ (id)_new;
+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMutableArray:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)values;

@end

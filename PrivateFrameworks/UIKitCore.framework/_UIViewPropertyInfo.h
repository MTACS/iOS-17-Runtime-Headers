
@interface _UIViewPropertyInfo : NSObject <NSCopying> {
    <UIVectorOperatable> * _previousValue;
    <UIVectorOperatable> * _value;
}

@property (nonatomic, retain) <UIVectorOperatable> *previousValue;
@property (nonatomic, retain) <UIVectorOperatable> *value;

+ (id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

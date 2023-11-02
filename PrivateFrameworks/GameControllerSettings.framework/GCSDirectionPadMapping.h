
@interface GCSDirectionPadMapping : GCSElementMapping {
    bool  _invertHorizontally;
    bool  _invertVertically;
    bool  _swapAxes;
}

@property (nonatomic) bool invertHorizontally;
@property (nonatomic) bool invertVertically;
@property (nonatomic) bool swapAxes;

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementKey:(id)arg1 mappingKey:(id)arg2 remappingOrder:(int)arg3;
- (id)initWithElementKey:(id)arg1 mappingKey:(id)arg2 remappingOrder:(int)arg3 invertHorizontally:(bool)arg4 invertVertically:(bool)arg5 swapAxes:(bool)arg6;
- (id)initWithJSONObject:(id)arg1;
- (bool)invertHorizontally;
- (bool)invertVertically;
- (bool)isCustomized;
- (id)jsonObject;
- (void)setInvertHorizontally:(bool)arg1;
- (void)setInvertVertically:(bool)arg1;
- (void)setSwapAxes:(bool)arg1;
- (bool)swapAxes;

@end

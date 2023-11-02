
@interface TTKSimpleKeyboardPlane : NSObject {
    NSArray * _keys;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly, copy) NSString *name;

+ (float)keyplaneHeightForKeys:(id)arg1;
+ (float)keyplaneWidthForKeys:(id)arg1;

- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;
- (id)initWithName:(id)arg1 keys:(id)arg2;
- (id)initWithTIKeyboardLayout:(id)arg1;
- (id)keyboardOrientation;
- (float)keyboardWidth;
- (id)keys;
- (id)name;
- (id)toJsonDictionary;

@end
